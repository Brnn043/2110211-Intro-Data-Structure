#include <bits/stdc++.h>
using namespace std;

int n,w;
multiset<int> s;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>w;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<w+1;i++) s.insert(v[i]);
    auto it=s.begin();
    advance(it,w/2);
    cout<<*it<<' ';
    for(int i=1;i<n-w;i++) {
        s.erase(s.find(v[i-1]));
        s.insert(v[i+w]);
        it=s.begin();
        advance(it,w/2);
        cout<<*it<<' ';
    }
}