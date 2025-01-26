#include <bits/stdc++.h>
using namespace std;

map<char,int> out_priority = {{'+',1},{'-',1},{'*',3},{'/',3},{'^',7},{'(',8},{')',0}};
map<char,int> in_priority = {{'+',1},{'-',1},{'*',3},{'/',3},{'^',6},{'(',-1}};

string infix2postfix(string &input) {
    string ans;
    stack<char> s;
    for(auto &x:input) {
        if(out_priority.find(x)==out_priority.end()) ans+=x;
        else {
            while(!s.empty() && in_priority[s.top()]>=out_priority[x]) {
                ans+=s.top();
                s.pop();
            }

            if(x==')') s.pop();
            else s.push(x);
        }
    }
    while (!s.empty())
    {
        ans+=s.top();
        s.pop();
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    cin>>s;
    cout<<infix2postfix(s);
}