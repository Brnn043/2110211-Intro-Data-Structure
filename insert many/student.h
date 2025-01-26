#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <queue>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  size_t sz = std::max(mCap,mSize+data.size());
  T* tmp = new T[sz]();
  size_t now=0;
  std::priority_queue<std::pair<int,T>, std::vector<std::pair<int,T>>, std::greater<std::pair<int,T>> > pq;
  for(int i=0;i<data.size();i++) pq.push(data[i]);

  for(int i=0;i<mSize;i++) {
    while(!pq.empty()&&i>pq.top().first) {
      pq.pop();
    }
    if(pq.top().first==i) {
      tmp[now++]=pq.top().second;
      pq.pop();
    }
    tmp[now++]=mData[i];

  }

  while(!pq.empty()) {
    tmp[now++]=pq.top().second;
    pq.pop();
  }

  delete [] mData;
  mData = tmp;
  mSize = now;
  mCap = sz;
}

#endif
