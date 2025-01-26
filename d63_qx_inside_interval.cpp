#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++) {
        int x;
        cin>>x;
        int idx=upper_bound(v.begin(),v.end(),x)-v.begin();
        if(idx==2*n && v[idx-1]==x) cout<<1<<' ';
        else if(idx==2*n || idx==0) cout<<0<<' ';
        else if(idx>=2 && v[idx-1]==v[idx-2] && x==v[idx-1]) cout<<1<<' ';
        else if(idx%2 && v[idx]>=x && v[idx-1]<=x) cout<<1<<' ';
        else if(!(idx%2) && v[idx-1]==x) cout<<1<<' ';
        else cout<<0<<' ';
    }
}