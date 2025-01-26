#include <bits/stdc++.h>
using namespace std;

int n,cnt;
map<string,int> m;
string ans;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto [x,y]:m) {
        if(y>=cnt) {
            cnt=y;
            ans=x;
        }
    }
    cout<<ans<<' '<<cnt;
}