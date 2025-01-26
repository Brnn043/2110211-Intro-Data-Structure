#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  ensureCapacity(mSize+1);
  T* tmp = new T[mCap]();
  int idx=mSize-pos;
  for(int i=0;i<idx;i++) tmp[i]=mData[i];
  tmp[idx]=value;
  for(int i=idx;i<mSize;i++) tmp[i+1]=mData[i];
  mSize++;
  delete [] mData;
  mData = tmp;
}

#endif
