#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  mSize = std::max(0,(int)(mSize-K));
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> st;
  for(int i=std::max(0,(int)(mSize-K));i<mSize;i++) {
    st.push(mData[i]);
  }
  mSize = std::max(0,(int)(mSize-K));
  return st;
}

#endif
