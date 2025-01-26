#include <bits/stdc++.h>
using namespace std;

int n,m,sum;
int p[100003];
vector<pair<int,int>> x;
queue<int> q1,q2;
map<int,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    x.resize(m);
    for(int i=0;i<m;i++) { cin>>p[i]; x[i].first=p[i]; }
    sort(x.begin(),x.end());
    int op;
    for(int i=0;i<n;i++) {
        cin>>op;
        if(op==2) {
            if(!q1.empty() && !q2.empty()) {
                if(q1.front()<=q2.front()) {
                    sum+=q1.front();
                    q1.pop();
                } else {
                    sum+=q2.front();
                    q2.pop();
                }
            } else if(q1.empty() && !q2.empty()) {
                sum+=q2.front();
                q2.pop();
            } else if(!q1.empty() && q2.empty()) {
                sum+=q1.front();
                q1.pop();
            }
            auto it=upper_bound(x.begin(),x.end(),make_pair(sum,INT_MAX));
            // cout<<sum<<' '<<it->first<<' '<<it->second<<'\n';
            if(it!=x.end()) (it->second)++;
            // cout<<it->first<<' '<<it->second<<'\n';
        } else if(op==1) {
            int a,b;
            cin>>a>>b;
            if(a==1) q1.push(b);
            else if(a==2) q2.push(b);
        }
    }
    // cout<<"---------\n";
    for(int i=1;i<m;i++) x[i].second+=x[i-1].second;
    // for(int i=0;i<m;i++) cout<<x[i].first<<' '<<x[i].second<<"\n";
    for(int i=0;i<m;i++) mp[x[i].first]=x[i].second;
    for(int i=0;i<m;i++) {
        if(sum<p[i]) cout<<-1<<' ';
        else cout<<mp[p[i]]+1<<' ';
    }
}