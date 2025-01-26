#include <bits/stdc++.h>
using namespace std;

int n;
map<int,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    while(n--) {
        int op;
        cin>>op;
        if(op==2) cout<<mp.size()<<'\n';
        else {
            int a,b;
            cin>>a>>b;
            if(mp.size()==0) {
                mp[a]=b;
                continue;
            }
            auto start = mp.lower_bound(a);
            auto end = start;
            while(start!=mp.begin()) {
                start--;
                if(start->second+1>=a) a=start->first;
                else { start++; break; }
            }
            if(end!=mp.begin()) end--;
            while(end!=mp.end()) {
                if(end->first-1<=b) b=max(b,end++->second);
                else break;
            }
            mp.erase(start,end);
            mp[a]=b;
        }
    }
}