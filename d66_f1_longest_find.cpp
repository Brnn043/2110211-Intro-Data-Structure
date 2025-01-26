#include <bits/stdc++.h>
using namespace std;

int n,m,ans2=1,ans1=1;
vector<pair<int,int>> v;

// 0=blank 1=erased 2=occupied

void print() {
    for(int i=0;i<n;i++) cout<<v[i].second<<' ';
    cout<<'\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    v.resize(n,{0,0});
    while(m--) {
        int a,b;
        cin>>a>>b;
        if(a==1) {
            int idx = b%n,j=1;
            while(v[idx].second==2) {
                idx=(idx+j*j)%n;
                ++j;
            }
            v[idx]={b,2};
        } else if(a==2) {
            int idx = b%n,j=1;
            while(v[idx].second!=0) {
                if(v[idx].second==2 && v[idx].first==b) {
                    v[idx].second=1;
                    break;
                }
                idx=(idx+j*j)%n;
                ++j;
            }
        }
        print();
    }

    print();

    for(int i=0;i<n;i++) {
        int j=0,idx=i; 
        while(v[idx].second==2) {
            ans1=max(ans1,j+1);
            idx=(idx+j*j)%n; ++j;
            cout<<"j = "<<j<<'\n';
        }
        idx=i; j=0;
        while(v[idx].second!=0) {
            ans2=max(ans2,j+1);
            idx=(idx+j*j)%n; ++j;
        }
        cout<<i<<" : "<<ans1<<' '<<ans2<<'\n';
    }

    cout<<ans1<<' '<<ans2;
}