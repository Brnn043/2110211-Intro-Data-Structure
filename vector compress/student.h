#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T* arr = new T[mSize]();
    for(size_t i=0;i<mSize;i++) {
        arr[i]=mData[i];
    }
    mCap=mSize;
    delete [] mData;
    mData = arr;
}

#endif
