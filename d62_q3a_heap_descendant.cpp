#include <bits/stdc++.h>
using namespace std;

int n,a,cnt;
vector<int> ans;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>a;
    queue<int> q;
    q.push(a);
    while(!q.empty()) {
        int u=q.front(); q.pop();
        ans.push_back(u); cnt++;
        int l = 2*u+1,r=2*u+2;
        if(l<n) q.push(l);
        if(r<n) q.push(r);        
    }
    cout<<cnt<<'\n';
    for(auto &x:ans) cout<<x<<' ';
}