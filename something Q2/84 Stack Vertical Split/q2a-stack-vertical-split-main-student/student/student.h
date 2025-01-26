#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  int t = mSize%k;
  int now=mSize-1;
  output.resize(k);
  for(int i=0;i<k;i++) {
    int sz=mSize/k;
    if(i<t) sz++;
    for(int j=sz-1;j>=0;j--) {
      output[i].push(mData[now-j]);
    }
    now-=sz;
  }
}

#endif
