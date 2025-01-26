#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if(a==b) return a;
  --b;
  if(a==b) return a;
  auto ans = a;
  while(a!=b && a!=b.ptr->next) {
    std::swap(*a,*b);
    ++a; --b;
  }
  return ans;
}

#endif
