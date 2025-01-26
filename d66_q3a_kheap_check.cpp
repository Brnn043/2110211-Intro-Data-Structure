#include <bits/stdc++.h>
using namespace std;

long long m,n,k;

bool check(vector<int> &v) {
    for(long long i=0;i<n;i++) {
        for(long long j=1;j<=k&&(i*k+j)<n;j++) {
            if(v[i]<v[k*i+j]) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        cout<<(check(v)?"true\n":"false\n");
    }
}