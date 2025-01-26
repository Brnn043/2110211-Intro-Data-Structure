#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  k=std::min(k,(int)size());
  m=std::min(m,(int)s2.size());
  size_t sz=size()+m;
  if(sz>mCap) expand(std::max(mCap*2,sz));
  for(int i=0;i<k;i++) mData[sz-1-i]=mData[mSize-1-i];

  for(int i=0;i<m;i++) mData[mSize-k+i]=s2.mData[s2.size()-m+i];
  mSize=sz;
  s2.mSize-=m;
}
#endif
