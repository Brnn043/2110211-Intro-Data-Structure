#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>

template <typename T>
void CP::vector<T>::uniq() {
  //do something here 
  std::unordered_set<T> s;
  T* tmp = new T[mCap]();
  int pos=0;
  for(int i=0;i<mSize;i++) s.insert(mData[i]);
  for(int i=0;i<mSize;i++) {
    if(s.find(mData[i])!=s.end()) {
      s.erase(mData[i]);   
      tmp[pos++]=mData[i];
    }
  }
  mSize=pos;
  delete [] mData;
  mData = tmp;
}

#endif
