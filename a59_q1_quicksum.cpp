#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int arr[1001][1001],qs[1001][1001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;  
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>arr[i][j];
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) qs[i][j]=qs[i-1][j]+qs[i][j-1]+arr[i][j]-qs[i-1][j-1]; 
    while(k--) {
        int r1,r2,c1,c2;
        cin>>r1>>c1>>r2>>c2;
        cout<<qs[r2+1][c2+1]-qs[r1][c2+1]-qs[r2+1][c1]+qs[r1][c1]<<'\n';
    }
}