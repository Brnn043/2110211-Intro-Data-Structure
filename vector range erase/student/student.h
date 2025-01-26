#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  // Write code here
  int chk[mSize+1]={0};
  for(auto &[a,b]:ranges) {
    chk[a-mData]++; chk[b-mData]--;
  }
  for(int i=0;i<mSize;i++) chk[i]+=chk[i-1];
  T* tmp = new T[mSize]();
  int now=0;
  for(int i=0;i<mSize;i++) {
    if(!chk[i]) tmp[now++]=mData[i];
  }
  delete [] mData;
  mSize=now;
  mData=tmp;
}

#endif
