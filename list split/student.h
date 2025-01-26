#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  
  auto prev_node = it.ptr->prev;

  result.mHeader->next = it.ptr;
  result.mHeader->prev = mHeader->prev;
  
  it.ptr->prev = result.mHeader;
  mHeader->prev->next = result.mHeader;

  mHeader->prev = prev_node;
  prev_node->next = mHeader;

  result.mSize = mSize - pos;
  mSize = pos;
  return result;
}

#endif
