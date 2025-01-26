#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if(a==b) return a;
  auto tmp = a++;
  while(a!=b) {
    auto tmp2 = ++a; --a;
    a.ptr->next->prev = a.ptr->prev;
    a.ptr->prev->next = a.ptr->next;

    tmp.ptr->prev->next = a.ptr;
    a.ptr->prev = tmp.ptr->prev;
    a.ptr->next = tmp.ptr;
    tmp.ptr->prev = a.ptr;

    tmp=a;
    a=tmp2;
  }
  return tmp;
}

#endif
