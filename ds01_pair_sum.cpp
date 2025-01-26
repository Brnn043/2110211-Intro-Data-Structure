#include <bits/stdc++.h>
using namespace std;

int n,m;
set<int> s;

bool have(int a) {
    for(auto x:s) {
        if(2*x==a) continue;
        if(s.find(a-x)!=s.end()) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0;i<m;i++) {
        int a;
        cin>>a;
        if(have(a)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}