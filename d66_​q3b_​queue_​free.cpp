// #include <bits/stdc++.h>
// using namespace std;

// int n;
// long long mSize,mCap=1;

// int main() {
//     ios_base::sync_with_stdio(0); cin.tie(0);
//     cin>>n;
//     while(n--) {
//         int a,k;
//         cin>>a>>k;
//         if(a==0) {
//             mSize+=k;
//             while(mSize>mCap) mCap<<=1;
//         }
//         else if(a==1) mSize-=k;
//     }
//     cout<<mCap-mSize;
// }

#include <bits/stdc++.h>
using namespace std;

int n;
long long mSize,mCap=1;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    while(n--) {
        int a,k;
        cin>>a>>k;
        if(a==0) {
            mSize+=k;
            if(mSize>mCap) mCap = (long long)pow(2,ceil(log2(mSize)));
        }
        else if(a==1) mSize-=k;
    }
    cout<<mCap-mSize;
}