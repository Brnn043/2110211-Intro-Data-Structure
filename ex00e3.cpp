#include <bits/stdc++.h>
using namespace std;

int n;
set<int> s;

bool check() {
    if(s.size()!=n) return false;
    for(auto &x:s) {
        if(x<1||x>n) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<(check()?"YES":"NO");
}