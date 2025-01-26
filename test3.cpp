#include <iostream>
#include <string> 
#include <map>

using std::map;

// Overload the + operator for std::string (non-member, no const)
std::string operator*(const std::string& lhs, const std::string& rhs) {
    std::string result = lhs + rhs + " done";  // Concatenate lhs, rhs, and "done"
    return result;
}


int main() {
    std::cout<<(std::string)"abx"*(std::string)"dsds"<<'\n';
    map<int,int,std::greater<int>> mp;
    mp.insert(std::make_pair(0,0));
    mp[1]=1;
    for(auto x:mp) std::cout<<x.first<<' '<<x.second<<'\n';
}