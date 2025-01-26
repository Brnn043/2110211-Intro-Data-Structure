#include <bits/stdc++.h>
using namespace std;

int n,m;
map<string,string> mp1;
map<string,set<string>> mp2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        string a,b;
        cin>>a>>b;
        mp1[a]=b;
        mp2[b].insert(a);
    }
    for(int i=0;i<m;i++) {
        int t;
        string a,b;
        cin>>t>>a>>b;
        if(t==1) {
            mp2[mp1[a]].erase(a);
            mp1[a]=b;
            mp2[b].insert(a);
        }
        else {
            for(auto &x:mp2[a]) {
                mp1[x]=b;
                mp2[b].insert(x);
            }
            mp2.erase(a);
        }
    }
    for(auto &[x,y]:mp2) {
        cout<<x<<": ";
        for(auto &z:y) cout<<z<<' ';
        cout<<'\n';
    }
}