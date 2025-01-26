#include <bits/stdc++.h>
using namespace std;

int n;
map<int,int> mp;
set<int> ans;

void debug() {
    for(auto [x,y]:mp) cout<<x<<' '<<y<<'\n';
    cout<<"===============\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        debug();
        int a,b;
        cin>>a>>b;
        if(i==0) {
            ans.insert(i+1);
            mp[a]=b;
            continue;
        }
        auto it = mp.upper_bound(a);
        if(it!=mp.end() && it->first<=b) continue;
        --it;
        if(a>=it->first && a<=it->second) continue;
        ans.insert(i+1);
        mp[a]=b;
    }
    for(auto x:ans) cout<<x<<' ';
}