#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
using namespace std;

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(mSize!=other.mSize) return false;

  vector<T> v1(mSize);
  for(int i=0;i<mSize;i++) v1[i]=mData[i];
  sort(v1.begin(),v1.end(),mLess);

  vector<T> v2(other.mSize);
  for(int i=0;i<other.mSize;i++) v2[i]=other.mData[i];
  sort(v2.begin(),v2.end(),other.mLess);

  for(int i=0;i<mSize;i++) {
    if(v1[i]!=v2[i]) return false;
  }
  return true;
}

#endif
