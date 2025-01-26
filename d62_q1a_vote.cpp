#include <bits/stdc++.h>
using namespace std;

int n,k;
map<string,int> m;
vector<pair<string,int>> v;

bool compare(pair<string,int> a,pair<string,int> b) {
    return a.second>b.second;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        m[s]++;
    }
    copy(m.begin(),m.end(),back_inserter(v));
    sort(v.begin(),v.end(),compare);
    int idx=min(k-1, (int)v.size()-1);
    cout<<v[idx].second;
}