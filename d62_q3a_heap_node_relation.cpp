#include <bits/stdc++.h>
using namespace std;

int n,m;

bool findUp(int u,int d) {
    int now = d;
    if(u==0) return true;
    while(now>0) {
        if(now==u) return true;
        now=(now-1)/2;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    while(m--) {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<"a and b are the same node\n";
        else if(a<b) {
            if(findUp(a,b)) cout<<"a is an ancestor of b\n";
            else cout<<"a and b are not related\n";
        } else {
            if(findUp(b,a)) cout<<"b is an ancestor of a\n";
            else cout<<"a and b are not related\n";
        }
    }
}