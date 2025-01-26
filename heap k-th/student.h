#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> v;
  for(int i=0;i<std::min((int)mSize,7);i++) v.push_back(mData[i]);
  std::sort(v.begin(),v.end(),mLess);
  return v[v.size()-1-k-1];
}

#endif
