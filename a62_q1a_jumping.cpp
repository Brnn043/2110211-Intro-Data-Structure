#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000003],a[1000003];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    dp[0]=INT_MIN;
    dp[1]=a[1]; 
    if(n>=2) dp[2]=max(dp[1],dp[0])+a[2];
    for(int i=3;i<=n;i++) {
        dp[i]=max({dp[i-1],dp[i-2],dp[i-3]})+a[i];
    }
    cout<<dp[n];
}