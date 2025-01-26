#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  // Write code here
  int tmp[mSize+1]={0};
  for(auto &[x,y]:ranges) {
    tmp[x-begin()]++;
    tmp[y-begin()]--;
  }  
  for(int i=1;i<mSize;i++) tmp[i]+=tmp[i-1];
  T* tmpData = new T[mCap]();
  int now=0;
  for(int i=0;i<mSize;i++) {
    if(!tmp[i]) tmpData[now++]=mData[i];
  }

  delete [] mData;
  mData = tmpData;
  mSize = now;
}

#endif
