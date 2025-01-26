#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  auto it2 = output.begin();
  while(a!=b) {
    if(*a==value) {
      auto tmp = a; ++tmp;
      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      
      a.ptr->prev = it2.ptr->prev;
      it2.ptr->prev->next = a.ptr; 

      a.ptr->next = it2.ptr;
      it2.ptr->prev = a.ptr;

      mSize--;
      output.mSize++;

      a = tmp;
    } else ++a;
  }
}

#endif
