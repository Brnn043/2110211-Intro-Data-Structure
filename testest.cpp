#include <bits/stdc++.h>
using namespace std;

auto compare = [] (const pair<int,int> &lhs,const pair<int,int> &rhs) {
        return lhs.second<rhs.second; 
    };

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<pair<int,int>> v{{1,5},{4,2},{0,1}};
    set<pair<int,int>,decltype(compare)> s(compare);
    priority_queue<pair<int,int> ,vector<pair<int,int>> ,decltype(compare)> pq(compare);
    for(auto x: v) { s.insert(x); pq.push(x); }

    sort(v.begin(),v.end(),compare);
    for(auto x:v) {
        cout<<x.first<<' '<<x.second<<'\n';
    }
    cout<<"------------\n";
    for(auto x:s) {
        cout<<x.first<<' '<<x.second<<'\n';
    }
    cout<<"------------\n";
    while(!pq.empty()){
        pair<int,int> x = pq.top(); pq.pop();
        cout<<x.first<<' '<<x.second<<'\n';
    }
}