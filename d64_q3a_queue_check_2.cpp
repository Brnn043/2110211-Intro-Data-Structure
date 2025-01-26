#include <bits/stdc++.h>
using namespace std;

int mFront,mSize,mCap,last,correction;

bool is_correct() {
    if(mSize>mCap || mFront>=mCap || last>=mCap) return false;
    if(mSize==mCap) return last==mFront;
    else if((mFront+mSize)%mCap!=last) return false;
    return true;
}

void solve() {
    cin>>mFront>>mSize>>mCap>>last>>correction;
    if(is_correct()) cout<<"OK\n";
    else {
        if(correction==0) cout<<"WRONG\n";
        else {
            cout<<"WRONG ";
            if(correction==1) {
                cout<<(last-mSize+mCap)%mCap<<'\n';
            } else if(correction==2) cout<<(last-mFront+mCap)%mCap<<'\n';
            else if(correction==3) {
                if(last>mFront) cout<<last+1<<'\n';
                else if(last==mFront) {
                    if(mSize==0) cout<<mFront+1<<'\n';
                    else cout<<mSize<<'\n';
                } else if(last<mFront) {
                    cout<<mFront+mSize-last-1<<'\n';
                }
            } else if(correction==4) {
                cout<<(mFront+mSize)%mCap<<'\n';
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    while(n--) solve();
}
/*
10
0 0 1 0 0
0 2 4 2 0
0 8 8 20 0
0 2 4 0 0
0 2 4 0 2
0 2 4 0 4
1 3 8 7 1
10 100 8 110 3
3 8 2 3 3
3 2 0 5 3
*/