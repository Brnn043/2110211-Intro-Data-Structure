#include <bits/stdc++.h>
using namespace std;

int n,m,k;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++) {
        int p;
        cin>>p;
        int start=lower_bound(v.begin(),v.end(),p-k)-v.begin();
        int end=upper_bound(v.begin(),v.end(),p+k)-v.begin();
        cout<<max(0,end-start)<<' ';
    }
}