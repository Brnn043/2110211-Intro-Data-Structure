#include <bits/stdc++.h>
using namespace std;

int n,m;
set<int> s1,s2;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        s1.insert(a);
    }
    for(int i=0;i<m;i++) {
        int a;
        cin>>a;
        s2.insert(a);
    }
    for(auto &x:s1) {
        if(s2.find(x)!=s2.end()) v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto &x:v) cout<<x<<' ';
}