#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    if(mSize+b-a+1>mCap) expand(std::max(2*mCap,mSize+b-a+1));
    for(int i=0;i<a;i++) {
        mData[mSize+b-a+1-1-i]=mData[mSize-1-i];
    }
    size_t now=mSize+b-a+1-1-a;
    for(int i=a;i<=b;i++) {
        mData[now--]=mData[mSize-1-i];
        mData[now--]=mData[mSize-1-i];
    }
    mSize+=b-a+1;
}

#endif