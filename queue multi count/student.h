#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include <unordered_map>
#include <set>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> ans(k.size());
    std::unordered_map<T,size_t> tmp;
    std::multiset<T> tmp2;

    for(int i=0;i<mSize;i++) tmp2.insert(mData[(mFront+i)%mCap]);

    size_t now = 0;
    for(auto &x:k) {
        if(tmp.find(x)!=tmp.end()) {
            ans[now++]={x,tmp[x]};
        } else  {
            size_t cnt = tmp2.count(x);
            ans[now++]={x,cnt};
            tmp[x]=cnt;
        }
    }
    return ans;
}

#endif
