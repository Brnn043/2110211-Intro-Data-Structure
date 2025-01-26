#include <bits/stdc++.h>
using namespace std;

int n,m,now1,now2,last=-1;
vector<int> v1,v2,ans;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<m;i++) {
        int a;
        cin>>a;
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    while(now1<n&&now2<m) {
        if(v1[now1]==v2[now2]) {
            if(v1[now1]!=last) ans.push_back(v1[now1]);
            last=v1[now1];
            now1++;
            now2++;
        } else if(v1[now1]<v2[now2]) now1++;
        else now2++;
    }
    for(auto x:ans) cout<<x<<' ';
}