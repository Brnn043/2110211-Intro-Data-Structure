#include <bits/stdc++.h>
using namespace std;

int n,m;
map<int,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    for(int i=0;i<m;i++) {
        int a;
        cin>>a;
        auto it = mp.upper_bound(a);
        if(it==mp.begin()) cout<<0<<' ';
        else {
            --it;
            if(it->second>=a) cout<<1<<' ';
            else cout<<0<<' ';
        }
    }
} 