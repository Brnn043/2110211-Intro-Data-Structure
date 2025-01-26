#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[503][503],dp[503][503];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++) dp[i][1]=a[i][1]+dp[i-1][1];
    for(int i=2;i<=m;i++) dp[1][i]=a[1][i]+dp[1][i-1];
    for(int i=2;i<=n;i++) {
        for(int j=2;j<=m;j++) {
            dp[i][j]=max({dp[i-1][j]+a[i][j],dp[i][j-1]+a[i][j],dp[i-1][j-1]+2*a[i][j]});
        }
    }
    cout<<dp[n][m];
}