#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  size_t sz=std::distance(first,last);
  mData = new T[sz]();
  mSize = sz;
  mCap = sz;
  size_t now = 0;
  for(;first!=last;first++) {
    mData[sz-1-now]=*first;
    now++;
  }
}

#endif
