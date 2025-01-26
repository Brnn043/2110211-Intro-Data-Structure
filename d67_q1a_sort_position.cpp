#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
priority_queue<pair<int,int>> pq;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        pq.push({-a,-i});
    }
    int now=1;
    while(!pq.empty()) {
        auto [x,y]=pq.top(); pq.pop();
        v[-y]=now;
        now++;
    }
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}