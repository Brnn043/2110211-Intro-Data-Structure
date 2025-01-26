#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  size_t now=0,s=std::max(mCap,last-first+mSize);
  T* tmp = new T[s]();
  if(position>=end()) {
    for(int i=0;i<mSize;i++) tmp[now++]=mData[i];
    for(;first<last;first++) tmp[now++]=*first;
  } else {
    for(auto it=begin();it!=end();it++) {
      if(it==position) {
        for(;first<last;first++) tmp[now++]=*first;
      }
      tmp[now++]=*it;
    }
  }
  delete [] mData;
  mData = tmp;
  mSize = now;
  mCap = s;
}

#endif
