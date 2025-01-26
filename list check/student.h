#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <vector>
#include <algorithm>

template <typename T>
bool CP::list<T>::check() {
  //your code here
  std::vector<T> v1,v2;
  auto now1 = mHeader->next;
  auto now2 = mHeader->prev;
  if(mSize==0) {
    if(now1==mHeader && now2==mHeader) return true;
    else return false;
  }
  for(int i=0;i<mSize;i++) {
    if(now1==NULL || now2==NULL) return false;
    v1.push_back(now1->data); v2.push_back(now2->data);
    now1 = now1->next;
    now2 = now2->prev;
  }
  if(!(now1==mHeader && now2==mHeader)) return false;
  std::reverse(v2.begin(),v2.end());
  for(int i=0;i<mSize;i++) {
    if(v1[i]!=v2[i]) return false;
  }
  return true;
}


#endif
