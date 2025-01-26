#include <bits/stdc++.h>
using namespace std;

int n,m;
map<int,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) { 
        int a;
        cin>>a;
        mp[a]++;
    }
    for(int i=1;i<=m;i++) {
        int ct;
        cin>>ct;
        for(int j=0;j<ct;j++) {
            int a;
            cin>>a;
            auto it=mp.upper_bound(a);
            if(it==mp.end()) {
                cout<<i;
                exit(0);
            }
            if(--(it->second)==0) mp.erase(it->first);
        }
    }
    cout<<m+1;
}