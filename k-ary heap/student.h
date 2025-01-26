#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while(idx>0) {
        int p = (idx-1)/4;
        if(mLess(tmp,mData[p])) break;
        mData[idx]=mData[p];
        idx=p;
    }
    mData[idx]=tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    while(4*idx+1<mSize) {
        int next = 4*idx+1;
        T now = mData[4*idx+1];
        for(int i=2;i<=4;i++) {
            if(4*idx+i<mSize && mLess(now,mData[4*idx+i])) {
                next = 4*idx+i;
                now = mData[4*idx+i];
            }
        }
        if(mLess(now,tmp)) break;
        mData[idx]=now;
        idx=next;
    }
    mData[idx]=tmp;
}

#endif

