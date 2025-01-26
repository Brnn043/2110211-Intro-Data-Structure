#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> ans(k);
  int x=mSize%k,now=k-1;
  for(int i=0;i<x;i++) {
    ans[x-1-i].push_back(mData[i]);
  }
  for(int i=x;i<mSize;i++) {
    ans[now].push_back(mData[i]);
    now=(now-1+k)%k;
  }
  return ans;
}

#endif

