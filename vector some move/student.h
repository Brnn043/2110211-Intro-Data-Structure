#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

const int NUMBER = 1871;

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  if(index>mCap) {
    std::vector<int> tmp;
    int sz=value.size();
    while(sz>0) {
      if(sz-NUMBER>=0) tmp.push_back(sz-NUMBER);
      else tmp.push_back(sz);
      sz-=NUMBER;
    }

    int now=0;
    for(auto &size:tmp) {
      aux.push_back(mCap+size);
      mCap+=size;
      std::vector<T> tmp2(size);
      for(int i=0;i<size;i++) {
        tmp2[i]=value[now++];
      }
      mData.push_back(tmp2);
    }
    mSize+=value.size();
    return;
  }

  int k = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
  if (k > 0) index -= aux[k - 1];
  std::vector<T> remaining;

  for(int i=index;i<mData[k].size();i++) remaining.push_back(mData[k][i]);

  std::vector<T> that;

  for(int i=0;i<index;i++) {
    that.push_back(mData[k][i]);
  }

  int now=0;
  for(int i=index;i<NUMBER;i++) {
    that.push_back(value[now++]);
  }
  mData[k]=that;
  aux[k]=that.size();

  std::vector<std::vector<T>> tmppp;
  int size=value.size()-now;
  for(int i=0;i<size/NUMBER;i++) {
    std::vector<T> tmp(NUMBER);
    for(int i=0;i<NUMBER;i++) tmp[i]=value[now++];
    tmppp.push_back(tmp);
  }

  std::vector<T> tmp;
  for(int i=0;i<size%NUMBER;i++) {
    tmp.push_back(value[now++]);
  } 

  int now2=0;
  for(int i=size%NUMBER;i<NUMBER && now2<remaining.size();i++) {
    tmp.push_back(remaining[now++]);
  }

  tmppp.push_back(tmp);

  if(now2<remaining.size()) {
    std::vector<T> tmp2;
    for(int i=now2;i<remaining.size();i++) tmp2.push_back(remaining[now2++]);
    tmppp.push_back(tmp2);
  }

  mData.insert(mData.begin()+k+1,tmppp.begin(),tmppp.end());

  std::vector<int> tmpAux(tmppp.size());
  tmpAux[0]=tmppp[0].size()+aux[k];
  for(int i=1;i<tmppp.size();i++) tmpAux[i]=tmppp[i].size()+tmpAux[i-1];

  aux.insert(aux.begin()+k+1,tmpAux.begin(),tmpAux.end());

  mCap+=value.size();
  mSize+=value.size();
}

#endif