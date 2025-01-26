#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  int cnt = 0;
  if(a==b) return;
  auto it = a;
  while(it!=b) {
    auto tmp = iterator(it.ptr->next);
    if(*it==value) {
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      mSize--; cnt++;
    }
    it=tmp;
  }
  for(int i=0;i<cnt;i++) {
    it=output.begin();
    node *n = new node(value,it.ptr->prev, it.ptr);
    it.ptr->prev->next = n;
    it.ptr->prev = n;
    output.mSize++;
  }
}

#endif
