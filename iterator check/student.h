#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  for(auto it2=begin();it2!=end();it2++) {
    if(it2==it) return true;
  }
  return false;
}

#endif
