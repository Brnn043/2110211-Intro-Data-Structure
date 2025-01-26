#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(auto it =ls.begin();it!=ls.end();it++) {
    mHeader->prev->next = it->mHeader->next;
    it->mHeader->next->prev = mHeader->prev;

    it->mHeader->prev->next = mHeader;
    mHeader->prev = it->mHeader->prev;

    mSize += it->mSize;
    it->mSize = 0;
    it->mHeader->next = it->mHeader;
    it->mHeader->prev = it->mHeader;
  }
}

#endif


/*
3 4
1 2 3
3 10 20 30
1 100
0
3 990 991 992
*/