#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.size());
        T* tmp = new T[mCap]();
        size_t now = 0;
        for(int i=0;i<s.size();i++) tmp[now++]=s.mData[i];
        for(int i=0;i<mSize;i++) tmp[now++]=mData[i];

        delete [] mData;
        mData = tmp;
        mSize = now;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        ensureCapacity(mSize+q.size());
        T* tmp = new T[mCap]();
        size_t now = 0;

        for(int i=q.mSize-1;i>=0;i--) tmp[now++]=q.mData[(q.mFront+i)%q.mCap];
        for(int i=0;i<mSize;i++) tmp[now++]=mData[i];

        delete [] mData;
        mData = tmp;
        mSize = now;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.size());
        T* tmp = new T[mCap]();
        size_t now = 0;

        for(int i=0;i<mSize;i++) tmp[now++]=mData[(mFront+i)%mCap];
        for(int i=0;i<s.mSize;i++) tmp[now++]=s.mData[s.mSize-1-i];

        delete [] mData;
        mData = tmp;
        mSize = now;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        ensureCapacity(mSize+q.size());
        T* tmp = new T[mCap]();
        size_t now = 0;

        for(int i=0;i<mSize;i++) tmp[now++]=mData[(mFront+i)%mCap];
        for(int i=0;i<q.mSize;i++) tmp[now++]=q.mData[(q.mFront+i)%q.mCap];

        delete [] mData;
        mData = tmp;
        mSize = now;
    }
}
