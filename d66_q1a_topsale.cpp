#include <bits/stdc++.h>
using namespace std;

int n,m;
set<pair<int,int>> s;
set<int> sch;
map<int,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        sch.insert(a);
    }
    while(m--) {
        int op;
        cin>>op;
        if(op==1) {
            int a,b;
            cin>>a>>b;
            if(sch.find(a)==sch.end()) continue;
            if(mp.find(a)!=mp.end()) { 
                s.erase({mp[a],a});
                mp[a]+=b; 
                s.insert({mp[a],a});
            }
            else {
                mp[a]=b;
                s.insert({mp[a],a});
            }
        } else if(op==2) {
            int a;
            cin>>a;
            auto it = s.lower_bound({a,-1});
            if(it==s.begin()) cout<<"NONE\n";
            else {
                --it;
                cout<<it->second<<'\n';
            }
        }
    }
}
/*
3 10
1 2 3
1 999 10
1 3 5
1 2 3
1 1 4
2 20
2 5
1 2 2
1 1 1
2 5
2 6

*/