#include <iostream>
#include <vector>
#include <map>
using namespace std;

void insert_into_sv(map<int, int> &v, int pos, int value) {
    // your code here
    auto it=v.rbegin();
    while(it!=v.rend()&&it->first>=pos) {
        // cout<<"hello\n";
        // cout<<it->first<<' '<<it->second<<'\n';
        v[(it->first)+1]=it->second;
        auto it2=it;
        it++;
        // cout<<"debug : "<<it2->first<<' '<<it2->second<<'\n';
        v.erase(it->first);
        it=it2;
        it++;
    }
    v[pos]=value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x : v)
    {
        cout << x.first << ": " << x.second << "\n";
    }
}