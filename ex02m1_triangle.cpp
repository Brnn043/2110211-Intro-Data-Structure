#include <bits/stdc++.h>
using namespace std;

int n;
int a[101][101],mx[101][101];

int dfs(int i,int j) {
    if(i==n-1) return mx[i][j]=a[i][j];
    if(mx[i][j]!=-1) return mx[i][j];
    return mx[i][j]=a[i][j]+max(dfs(i+1,j),dfs(i+1,j+1));
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<i+1;j++) { cin>>a[i][j]; mx[i][j]=-1; }
    cout<<dfs(0,0);
}   