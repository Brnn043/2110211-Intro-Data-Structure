#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  int t = mSize%k,now=0;
  output.resize(k);
  for(int i=0;i<k;i++) {
    int sz= (i<t)?mSize/k+1:mSize/k;
    for(int j=0;j<sz;j++) {
      output[i].push(mData[(mFront+now++)%mCap]);
    }
  }
}

#endif
