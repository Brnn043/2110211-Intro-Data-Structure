#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  T* tmp = new T[mCap]();
  size_t now=0,idx=0;
  for(size_t i=0;i<mSize;i++) {
    while(pos[idx]<i&&idx<pos.size()) idx++;
    if(idx>=pos.size()) tmp[now++]=mData[i];
    else if(pos[idx]==i) {
      idx++;
    } else if(pos[idx]>i) tmp[now++]=mData[i];
  }
  mSize = now;
  delete [] mData;
  mData = tmp;
}

#endif
