#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{   
    if(mSize+b-a+1>mCap) expand(std::max(2*mCap,mSize+b-a+1));
    for(int i=0;i<a;i++) {
        mData[mSize-1-i+b-a+1]=mData[mSize-1-i];
    }
    int now=mSize-1-a+b-a+1;
    for(int i=a;i<=b;i++) {
        for(int j=0;j<2;j++) mData[now--]=mData[mSize-1-i];
    }
    mSize+=b-a+1;
}

#endif