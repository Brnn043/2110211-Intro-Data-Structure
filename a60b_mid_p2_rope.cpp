#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
int dp[4003];
bool vis[4003];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>a>>b>>c;
    vis[0]=true;
    for(int i=1;i<=n;i++) {
        if(i>=a && vis[i-a]) { dp[i]=max(dp[i],dp[i-a]+1); vis[i]=true; }
        if(i>=b && vis[i-b]) { dp[i]=max(dp[i],dp[i-b]+1); vis[i]=true; }
        if(i>=c && vis[i-c]) { dp[i]=max(dp[i],dp[i-c]+1); vis[i]=true; }
        // cout<<i<<' '<<dp[i]<<'\n';
    }
    cout<<dp[n];
}