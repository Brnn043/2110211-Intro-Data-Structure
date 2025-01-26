#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int n,m;
priority_queue<pii,vector<pii>,greater<pii>> pq;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        pq.push({0,a});
    }
    int cnt=0;
    while(cnt<m) {
        pii x=pq.top();
        pq.pop();
        cout<<x.first<<'\n';
        pq.push({x.first+x.second,x.second});
        cnt++;
    }
}