#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,MOD=1e8+7;
ll dp[3][10000003][2];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    //help me
    for(int i=1;i<=2;i++) {
        for(int j=1;j<=n;j++) {
            for(int k=0;k<2;k++) {
                dp[i][j][0]=(dp[i][j][0]+dp[i-1][j][k])%MOD;
                dp[i][j][0]=(dp[i][j][0]+dp[i][j-1][k])%MOD;
            }
            dp[i][j][1]=(dp[i][j][1]+min(dp[i-1][j][0],dp[i][j-1][1]))%MOD;
            dp[i][j][1]=(dp[i][j][1]+min(dp[i-1][j][1],dp[i][j-1][0]))%MOD;
        }
    }
    for(int i=1;i<=2;i++) {
        for(int j=1;j<=n;j++) cout<<dp[i][j][0]<<' ';
        cout<<'\n';
    }
    cout<<"----------\n";
    for(int i=1;i<=2;i++) {
        for(int j=1;j<=n;j++) cout<<dp[i][j][1]<<' ';
        cout<<'\n';
    }
    cout<<(dp[1][n][0]+dp[2][n][1])%MOD;
}