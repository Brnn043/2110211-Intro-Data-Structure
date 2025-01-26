#include <bits/stdc++.h>
using namespace std;

int n,m;
set<pair<int,int>> s;
vector<int> now;
vector<pair<int,int>> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    now.resize(m);
    for(int i=0;i<m;i++) { s.insert({1,i}); now[i]=1; }
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i].first;
    for(int i=0;i<n;i++) cin>>v[i].second;
    for(int i=0;i<n;i++) {
        if(v[i].first>now[v[i].second]) {
            s.erase({now[v[i].second],v[i].second});
            now[v[i].second]=v[i].first;
            s.insert({now[v[i].second],v[i].second});
        }
        cout<<s.begin()->first<<' ';
    }
}
