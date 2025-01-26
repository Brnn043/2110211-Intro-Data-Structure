#ifndef __STUDENT_H_
#define __STUDENT_H_

//can include anything
#include <vector>
#include <algorithm>

template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  std::vector<T> v;
  bool chk[mSize]={false};
  for(auto &x:pos) {
    v.push_back(mData[x-mData]);
    chk[x-mData]=true;
  }
  std::sort(v.begin(),v.end(),comp);
  int now=0;
  for(int i=0;i<mSize;i++) {
    if(chk[i]) mData[i]=v[now++];
  }
}

#endif
