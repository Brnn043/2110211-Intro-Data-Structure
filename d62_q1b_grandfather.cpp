#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,m;
map<ll,ll> pa;

bool check(ll a,ll b) {
    if(a==b) return false;
    if(pa.find(a)==pa.end()||pa.find(b)==pa.end()) return false;
    ll p_a=pa[a],p_b=pa[b];
    if(pa.find(p_a)==pa.end()||pa.find(p_b)==pa.end()) return false;
    return pa[p_a]==pa[p_b];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        ll f,s;
        cin>>f>>s;
        pa[s]=f;
    }
    for(int i=0;i<m;i++) {
        ll a,b;
        cin>>a>>b;
        if(check(a,b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}