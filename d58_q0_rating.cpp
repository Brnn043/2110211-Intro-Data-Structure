#include <bits/stdc++.h>
using namespace std;

int n;
map<string,float> m1,m2,cnt1,cnt2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        string a,b;
        float c;
        cin>>a>>b>>c;
        m1[a]+=c;
        cnt1[a]++;
        m2[b]+=c;
        cnt2[b]++;
    }
    for(auto &[x,y]:m1) {
        cout<<x<<' '<<fixed<<setprecision(2)<<y/cnt1[x]<<'\n';
    }
    for(auto &[x,y]:m2) {
        cout<<x<<' '<<fixed<<setprecision(2)<<y/cnt2[x]<<'\n';
    }
}