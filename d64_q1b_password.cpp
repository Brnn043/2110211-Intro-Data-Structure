#include <bits/stdc++.h>
using namespace std;

int n,m,l;
int p[51];
set<string> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>l;
    for(int i=0;i<l;i++) cin>>p[i];
    for(int i=0;i<n;i++) {
        string a;
        string tmp="";
        cin>>a;
        // cout<<i<<' '<<a<<'\n';
        for(int j=0;j<l;j++) {
            tmp+='a'+((a[j]-'a'-p[j]+26)%26+26)%26;
        }
        s.insert(tmp);
    }
    // for(auto x: s) cout<<x<<'\n';
    for(int i=0;i<m;i++) {
        string a;
        cin>>a;
        if(s.find(a)!=s.end()) cout<<"Match\n";
        else cout<<"Unknown\n";
    }
}