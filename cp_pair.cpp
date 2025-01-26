#include <iostream>
#include <string>
#include <set>
using namespace std;

namespace CP {
    template<typename T1,typename T2>
    class pair{
        public:
        T1 first;
        T2 second;
     
        // pair(const T1 &a,const T2 &b) {
        //     first = a;
        //     second = b;
        // }

        pair() : first(), second() {} // act like the default constructor

        pair(const T1 &a,const T2 &b) : first(a), second(b) {} //shorter faster

        bool operator==(const pair<T1,T2> &other) const {
            return first==other.first && second==other.second;
        }

        // bool operator>(const pair<T1,T2> &other) const {
        //     return tie(first,second) > tie(other.first,other.second);
        // }

        bool operator<(const pair<T1,T2> &other) const {
            return tie(first,second) < tie(other.first,other.second);
        }
    };
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    CP::pair<int,string> p1,p2; //default constructor but if we define constuctor then pung jaa
    CP::pair<int,int> p3;
    p3.first=1; p3.second=2;
    p1.first=1; p1.second="Hello World";
    p2.first=2; p2.second="ABC";
    // cout<<p1.first<<' '<<p1.second<<'\n';
    // cout<<p2.first<<' '<<p2.second<<'\n';
    // cout<<(p1==p2)<<'\n';
    // cout<<(p2>p1)<<'\n';
    set<CP::pair<int,string>> s;
    s.insert(p1); s.insert(p2);
    for(auto &[x,y]:s) cout<<x<<' '<<y<<'\n';

    CP:pair<int,int> p4(1,2);
    cout<<p4.first<<' '<<p4.second<<'\n';
}