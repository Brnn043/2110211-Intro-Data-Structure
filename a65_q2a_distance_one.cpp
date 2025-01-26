#include <bits/stdc++.h>
using namespace std;

int n,k,sum,MOD=100000007;
int dp[5003];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<=k;i++) dp[i]=1;
    for(int i=k+1;i<=n;i++) {
        for(int j=0;j<=i-k;j++) {
            dp[i]=(dp[i]+dp[j])%MOD;
        }
    }
    for(int i=0;i<=n;i++) sum=(sum+dp[i])%MOD;
    cout<<sum;
}