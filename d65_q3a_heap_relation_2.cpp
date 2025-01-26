#include <bits/stdc++.h>
using namespace std;

long long n,k;
long long a,b;

long long find_height(long long x) {
    if(x==0) return 0;
    return log((x+1)*(k-1))/log(k);
}

bool findd(long long u,long long d,long long dis) {
    long long now=d;
    for(int i=0;i<dis;i++) {
        now = (now-1)/k;
    }
    return now==u;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    while(n--) {
        cin>>k>>a>>b;
        if(a==b) { cout<<"4 "; continue; }
        if(a>b) swap(a,b);
        long long ha = find_height(a),hb=find_height(b);
        if(ha==hb) cout<<"4 ";
        else if(findd(a,b,hb-ha)) {
            if(hb-ha==1) cout<<"1 ";
            else cout<<"2 ";
        } else cout<<"3 ";
    }
}