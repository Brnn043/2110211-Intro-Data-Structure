#include <bits/stdc++.h>
using namespace std;

int n,m,a;
vector<int> sz;
vector<set<pair<int,int>>> v;
vector<map<int,int>> hm;
vector<vector<int>> userWin;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>a;
    sz.resize(n+1);
    v.resize(n+1);
    hm.resize(m+1);
    userWin.resize(m+1);
    for(int i=1;i<=n;i++) {
        cin>>sz[i];
        v[i]={};
    }
    while(a--) {
        char op;
        cin>>op;
        if(op=='B') {
            int u,i,va;
            cin>>u>>i>>va; //user item value
            if(hm[u].find(i)==hm[u].end()) {
                v[i].insert({-va,-u});
                hm[u][i]=va;
            } else {
                // cout<<"hello";
                v[i].erase({-hm[u][i],-u});
                v[i].insert({-va,-u});
                hm[u][i]=va;
            }
        } else if(op=='W') {
            int u,i;
            cin>>u>>i;
            v[i].erase({-hm[u][i],-u});
            hm[u].erase(i);
        }
    }

    // cout<<"-----------\n";
    // for(int i=1;i<=n;i++) {
    //     cout<<i<<" : \n";
    //     for(auto &x:v[i]) cout<<x.first<<' '<<x.second<<'\n';
    // }
    // cout<<"-----------\n";

    for(int i=1;i<=n;i++) {
        int cnt=0;
        for(auto it=v[i].begin();it!=v[i].end();it++) {
            if(cnt>=sz[i]) break;
            userWin[-(it->second)].push_back(i);
            cnt++;
        }
    }
    for(int i=1;i<=m;i++) {
        if(userWin[i].size()==0) cout<<"NONE\n";
        else {
            for(auto &x:userWin[i]) cout<<x<<' ';
            cout<<'\n';
        }
        // cout<<i<<" : \n";
        // for(auto &x:userWin[i]) cout<<x<<' ';
        // cout<<'\n';
    }
}