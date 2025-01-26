#include <bits/stdc++.h>
using namespace std;

int n,m,k;
vector<pair<int,int>> v;
set<pair<int,int>> s;
map<int,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) {
        int t,d;
        cin>>t>>d;
        v.push_back({t,d});
    }
    sort(v.begin(),v.end());
    s.insert({0,k});
    mp[k]=0;
    int now=k;
    for(auto &[t,d]:v) {
        auto it = s.upper_bound({t,0});
        it--;
        if(now-d<=0) {
            s.insert({t,0});
            mp[0]=t;
        } else {
            s.insert({t,it->second-d});
            mp[now-d]=t;
            now-=d;
        }
    }
    cout<<"=======\n";
    for(int i=0;i<m;i++) {
        int a,q;
        cin>>a>>q;
        if(a==1) {
            auto it = s.upper_bound({q,INT_MAX});
            it--;
            cout<<it->second<<'\n';
        } else if(a==2) {
            auto it = mp.lower_bound(q);
            it--;
            cout<<it->second<<'\n';
        }
    }

    cout<<"=======\n";
    for(auto [x,y]:mp) cout<<x<<' '<<y<<'\n';
}