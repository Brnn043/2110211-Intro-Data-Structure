#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin>>n>>m;
    queue<int> q;
    set<int> tmp;
    q.push(m);
    while(!q.empty()) {
        int u=q.front(); q.pop();
        tmp.insert(u);
        if(2*u+1<n) q.push(2*u+1);
        if(2*u+2<n) q.push(2*u+2);
    }
    cout<<n-tmp.size()<<'\n';
    for(int i=0;i<n;i++) {
        if(tmp.find(i)==tmp.end()) cout<<i<<' ';
    }
}