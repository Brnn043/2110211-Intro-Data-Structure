#include <bits/stdc++.h>
using namespace std;

int n;
map<string,int> m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto &[x,y]:m) {
        if(y>1) cout<<x<<' '<<y<<'\n';
    }
}