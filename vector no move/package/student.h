#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  size_t k = std::lower_bound(aux.begin(),aux.end(),idx+1)-aux.begin();
  if(k==0) return mData[0][idx];
  else {
    return mData[k][idx-aux[k-1]];
  }
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  size_t sz=mData.back().size();
  if(aux.size()==0) aux.push_back(sz);
  else {
    aux.push_back(aux.back()+sz);
  }
}

#endif
