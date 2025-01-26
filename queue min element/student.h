#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  std::vector<size_t> valid_pos;
  for(auto &x:pos) {
    if(x<0 || x>=mSize) continue;
    valid_pos.push_back(x);
  }
  T ans = mData[(mFront+valid_pos[0])%mCap];
  for(int i=1;i<valid_pos.size();i++) {
    if(comp(mData[(mFront+valid_pos[i])%mCap],ans)) ans=mData[(mFront+valid_pos[i])%mCap];
  }
  return ans;
  //should return something
  // return T();
}

#endif
