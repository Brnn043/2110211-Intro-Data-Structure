#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  size_t now=0;
  while(now<mSize && now<other.mSize) {
    if(mData[now]<other[now]) return true;
    if(mData[now]>other[now]) return false;
    now++;
    if(now==mSize && now==other.mSize) return false;
    if(now==mSize) return true;
    if(now==other.mSize) return false;
  }
  return false;
}

#endif
