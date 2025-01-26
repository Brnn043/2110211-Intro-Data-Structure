#include <bits/stdc++.h>
using namespace std;

set<int> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // s.insert(2);
    // s.insert(3);
    // for(auto x:s) {
    //     cout<<x<<'\n';
    // }
    // vector<int> v{1,2,3};
    
    // for(int i=1;i<=5;i++) s.insert(i);
    // for(auto x:s) cout<<x<<' ';
    // cout<<'\n';
    // // auto it = s.lower_bound(2);
    // auto it = s.begin();
    // cout<<*it<<'\n';
    // // s.erase(1);
    // s.erase(it);
    // cout<<*it<<'\n';
    // for(auto x:s) cout<<x<<" ";

    // vector<int> v{3,2,1};
    // auto it  = v.begin();
    // cout<<*it<<'\n';
    // *it=5;
    // cout<<*it<<'\n';
    // sort(v.begin(),v.end());
    // cout<<*it<<'\n';
    // v.erase(it);
    // cout<<*it<<'\n';

    // vector<int> test{1,1,1,1,3,3,2,3,1,2};
    // int n = test.size();
    // int now = 0;
    // for(int i=1;i<n;i++) {
    //     if(test[i]==test[i-1]) now++;
    //     else test[i-now]=test[i];
    // }
    // for(int i=0;i<n-now;i++) cout<<test[i]<<' ';

    // map<int,int> m;
    // for(int i=0;i<3;i++) m[i]=i+1;
    // auto it = m.find(1);
    // cout<<it->first<<' '<<it->second<<'\n';
    // cout<<"---------\n";
    // m.erase(m.begin());
    // for(auto &[x,y]:m) cout<<x<<' '<<y<<'\n';
    // cout<<"---------\n";
    // cout<<it->first<<' '<<it->second<<'\n';

    // map<int,char> mp;
    // for(int i=0;i<3;i++) mp[i+1]='a'+i;
    // for(auto &[x,y]:mp) cout<<x<<' '<<y<<'\n';
    // cout<<"---------\n";
    // map<int,char>::iterator it;
    // if((it=mp.find(3))!=mp.end()) cout<<it->second;

    // set<int> s = {1,2,3,4};
    // cout<<s.erase(2);

    map<int,char> m = {{1,'a'},{2,'b'}};
    cout<<m.erase(1);
}