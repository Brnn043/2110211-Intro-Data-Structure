#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include <queue>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  if(mSize<1) return true;
  std::queue<int> q;
  q.push(0);
  while(!q.empty()) {
    int u=q.front(); q.pop();
    int l = 2*u+1, r = 2*u+2;
    if(l<mSize) {
      if(!mLess(mData[l],mData[u])) return false;
      q.push(l);
    }
    if(r<mSize) {
      if(!mLess(mData[r],mData[u])) return false;
      q.push(r);
    }
  }
  return true;
}

#endif