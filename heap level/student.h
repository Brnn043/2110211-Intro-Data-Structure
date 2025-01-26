#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

int find_level(int idx) {
  return (int)log2(idx+1);
}

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  for(int i=0;i<mSize;i++) {
    if(find_level(i)==(int)k) r.push_back(mData[i]); 
  }
  std::sort(r.begin(),r.end(),mLess);
  std::reverse(r.begin(),r.end());
  return r;
}

#endif

