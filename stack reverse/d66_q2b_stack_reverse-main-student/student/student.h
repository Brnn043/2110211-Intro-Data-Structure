#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	first=std::max((size_t)0,first);
	last=std::min(last,mSize-1);
	for(int i=0;i<(int)(last-first+1)/2;i++) {
		std::swap(mData[mSize-1-first-i],mData[mSize-1-last+i]);
	}
}

#endif
