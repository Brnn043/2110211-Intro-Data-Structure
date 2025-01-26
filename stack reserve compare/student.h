#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int x=mCap-mSize;
    int y=other.mCap-other.mSize;
    if(x<y) return -1;
    if(x==y) return 0;
    return 1;
}

#endif
