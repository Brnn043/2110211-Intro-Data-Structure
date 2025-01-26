#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  T* tmp = new T[last-first]();
  size_t now=0;
  for(auto it=first;it<last;it++) {
    tmp[now++]=*it;
  }
  for(size_t i=0;i<now;i++) {
    mData[first-begin()+i]=tmp[(i+k)%now];
  }
  delete [] tmp;
}

#endif
