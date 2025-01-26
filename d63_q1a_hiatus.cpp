#include <bits/stdc++.h>
using namespace std;

int n,m;
set<pair<int,int>> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int y,m;
        cin>>y>>m;
        s.insert(make_pair(-y,-m));
    }
    for(int i=0;i<m;i++) {
        int y,m;
        cin>>y>>m;
        auto it=s.lower_bound(make_pair(-y,-m));
        if(it==s.end()) cout<<-1<<' '<<-1<<' ';
        else if(*it==make_pair(-y,-m)) cout<<0<<' '<<0<<' ';
        else cout<<-(it->first)<<' '<<-(it->second)<<' ';
    }
}