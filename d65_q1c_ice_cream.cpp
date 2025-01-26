#include <bits/stdc++.h>
using namespace std;

int n,m,start;
int day[100001],sm[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>start;
    day[0]=start;
    sm[0]=start;
    for(int i=0;i<n;i++) {
        int a,s;
        cin>>a>>s;
        day[a]=s;
    }
    for(int i=1;i<=100000;i++) if(!day[i]) day[i]=day[i-1];
    for(int i=1;i<=100000;i++) sm[i]=sm[i-1]+day[i];
    for(int i=0;i<m;i++) {
        int p,x;
        cin>>p>>x;
        auto it=lower_bound(sm,sm+100001,p);
        if(it-sm>x) it=lower_bound(sm,sm+100001,p+sm[x]);
        cout<<it-sm<<' '; 
    }
}