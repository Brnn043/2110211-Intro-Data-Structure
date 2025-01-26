#include <iostream>
using namespace std;

int h,m,t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>h>>m>>t;
    h+=t/60;
    m+=t%60;
    if(m>=60) {
        h++;
        m-=60;
    }
    if(h>=24) h-=24;
    printf("%02d %02d",h,m);
}