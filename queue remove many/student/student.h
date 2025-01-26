#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  bool chk[mSize]={false};
  for(auto &x:pos) chk[x]=true;
  T* tmp = new T[mCap]();
  int now=0;
  for(int i=0;i<mSize;i++) {
    if(!chk[i]) tmp[now++]=mData[(mFront+i)%mCap];
  }
  mFront=0;
  mSize-=pos.size();
  delete [] mData;
  mData = tmp;
}

#endif
