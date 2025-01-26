#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  ensureCapacity(mSize+1);
  int index = mSize-pos;
  index=std::max(std::min((int)mSize,index),0);
  for(int i = mSize;i>index;i--) {
    mData[i]=mData[i-1];
  }
  mData[index]=value;
  mSize++;
}

#endif
