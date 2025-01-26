#include <bits/stdc++.h>
using namespace std;

int n,mFront,mSize,mCap,last,correction;

bool checkk() {
    if(mSize>mCap) return false;
    if(mFront>=mCap || last>=mCap) return false;
    if(mSize==mCap && mFront!=last) return false;
    if(last>mFront && last-mFront!=mSize) return false;
    if(last<mFront && last+mCap-mFront!=mSize) return false;
    if(mSize!=0 && last==mFront && mSize!=mCap) return false;
    return true;
}

void solve() {
    cin>>mFront>>mSize>>mCap>>last>>correction;
    if(correction == 0) cout<<(checkk()?"OK\n":"WRONG\n");
    else {
        if(checkk()) {
            cout<<"OK\n";
        } else {
            cout<<"WRONG ";
            if(correction == 1) cout<<(last-mSize+mCap)%mCap<<'\n';
            else if(correction == 2) cout<<(last-mFront+mCap)%mCap<<'\n';
            else if(correction == 3) {
                if(last>mFront) {
                    if(last==mSize+mFront) cout<<last+1<<'\n';
                    else cout<<mFront+mSize<<'\n';
                }
                else if(last==mFront) cout<<mSize<<'\n';
                else cout<<mFront+mSize-last<<'\n';
            } else if(correction == 4) cout<<(mFront+mSize)%mCap<<'\n';
        }
    }  
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    while(n--) {
        solve();
    }
}