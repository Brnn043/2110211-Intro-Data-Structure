#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x;
    cin>>x;
    int n = ceil(log2(x));
    n=1<<n;
    cout<<n-x;
}