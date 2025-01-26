#include <bits/stdc++.h>
using namespace std;

int n,m;
map<pair<string,string>,bool> mp;

bool check(int x) {
    vector<pair<string,string>> v;
    bool chk=true;
    for(int i=0;i<x;i++) {
        string a,b;
        cin>>a>>b;
        if(!chk) continue;
        if(!mp[make_pair(a,b)]) chk=false;
        v.push_back({a,b});
    }
    if(!chk) return false;
    for(auto &[a,b]:v) mp[{a,b}]=false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        string a,b;
        cin>>a>>b;
        mp[{a,b}]=true;
    }
    for(int i=0;i<m;i++) {
        int x;
        cin>>x;
        cout<<(check(x)? "YES\n":"NO\n");
    }
}