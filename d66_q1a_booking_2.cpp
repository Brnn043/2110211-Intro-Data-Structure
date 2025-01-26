#include <bits/stdc++.h>
using namespace std;

int n,m;
set<pair<string,string>> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        string a,b;
        cin>>a>>b;
        s.insert({a,b});
    }
    for(int i=0;i<m;i++) {
        int k;
        cin>>k;
        vector<pair<string,string>> tmp;
        for(int i=0;i<k;i++) {
            string a,b;
            cin>>a>>b;
            tmp.push_back({a,b});
        }
        bool chk=true;
        for(int i=0;i<k;i++) {
            if(s.find(tmp[i])==s.end()) {
                chk=false;
                break;
            }
        }

        if(chk) {
            cout<<"YES\n";
            for(int i=0;i<k;i++) {
                s.erase(tmp[i]);
            }
        } else {
            cout<<"NO\n";
        }
    }
}