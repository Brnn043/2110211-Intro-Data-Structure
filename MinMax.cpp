#include <iostream>
using namespace std;

int n,m,r;
int arr[101][101];

bool invalid(int a,int b,int c,int d) {
    return a>c||b>d;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>r;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>arr[i][j];
    while(r--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(invalid(a,b,c,d)) cout<<"INVALID\n";
        else if(a>n||c<1||b>m||d<1) cout<<"OUTSIDE\n";
        else {
            int mx=arr[max(1,a)][max(1,b)];
            for(int i=max(1,a);i<=min(n,c);i++) for(int j=max(1,b);j<=min(m,d);j++) mx=max(mx,arr[i][j]);
            cout<<mx<<'\n';
        }
    }
}