#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"
#include <vector>
#include <stack>

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  int t=mSize%k,now=0;
  output.resize(k);
  int sz=mSize/k+1;
  for(int i=0;i<t;i++) {
    std::stack<T> tmp;
    for(int j=sz-1;j>=0;j--) {
      std::cout<<"idx = "<<mSize-1-i*sz-j<<'\n';
      tmp.push(mData[mSize-1-i*sz-j]);
    }
    output[i]=tmp;
  }
  sz--;
  for(int i=0;i<k-t;i++) {
    std::stack<T> tmp;
    for(int j=sz-1;j>=0;j--) {
      std::cout<<"idx = "<<mSize-1-i*sz-t*(sz+1)-j<<'\n';
      tmp.push(mData[mSize-1-i*sz-t*(sz+1)-j]);
    }
    output[i+t]=tmp;
  }
}

#endif
