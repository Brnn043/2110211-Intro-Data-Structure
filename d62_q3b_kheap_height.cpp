#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n,k;
    cin>>n>>k;
    long long l=0,r=n;
    while(l<r) {
        long long m = (l+r)/2;
        double now;
        if(k==1) now=m+1;
        else now = (pow(k,m+1)-1)/(k-1);
        if((long long)now==n) {
            cout<<m;
            return 0;
        }
        else if(now>n) r=m;
        else l=m+1;
    }
    cout<<l;
}