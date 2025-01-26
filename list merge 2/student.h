#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  for(auto x=ls.begin();x!=ls.end();x++) {
    mHeader->prev->next = x->mHeader->next;
    x->mHeader->next->prev = mHeader->prev;

    mHeader->prev = x->mHeader->prev;
    x->mHeader->prev->next = mHeader;

    mSize += x->mSize;
    x->mSize = 0;
    x->mHeader->prev=x->mHeader;
    x->mHeader->next=x->mHeader; 
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
