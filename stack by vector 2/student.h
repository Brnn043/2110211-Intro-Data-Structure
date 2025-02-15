#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  //write your code here
  return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
  //write your code here
  return v[v.size()-1];
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  //write your code here
  v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  //write your code here
  v.erase(v.end()-1);
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  //write your code here
  size_t pos = std::max(0,(int)(v.size()-depth));
  v.insert(v.begin()+pos,element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  //write your code here
  for(auto &x:w) v.push_back(x);
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  for(int i=v.size()-1;i>=0;i--) {
    if(v[i]==e) break;
    v.pop_back();
  }
}

#endif

