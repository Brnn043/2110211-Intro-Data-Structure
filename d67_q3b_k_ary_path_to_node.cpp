#include <bits/stdc++.h>
using namespace std;

long long n,k,p;
vector<long long> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k>>p;
    long long now = p;
    while(now>0) {
        long long pa = (now-1)/k;
        v.push_back(now-pa*k-1);
        now = pa;
    }
    cout<<v.size()<<'\n';
    for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<' ';
}