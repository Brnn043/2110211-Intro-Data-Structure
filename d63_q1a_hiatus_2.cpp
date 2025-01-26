#include <bits/stdc++.h>
using namespace std;

int n,m;
set<pair<int,int>> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        s.insert({-a,-b});
    }
    for(int i=0;i<m;i++) {
        int a,b;
        cin>>a>>b;
        auto it = s.lower_bound({-a,-b});
        if(it==s.end()) cout<<-1<<' '<<-1<<' ';
        else if(it->first==-a && it->second==-b) cout<<0<<' '<<0<<' ';
        else {
            cout<<-(it->first)<<' '<<-(it->second)<<' ';
        }
    }
}