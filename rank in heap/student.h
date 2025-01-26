#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  T value = mData[pos];
  size_t cnt=0;
  for(int i=0;i<mSize;i++) {
    if(mLess(value,mData[i])) cnt++;
  }
  return cnt;
  // vector<T> tmp;
  // for(int i=0;i<mSize;i++) {
  //   tmp.push_back(-mData[i]);
  // }
  // sort(tmp.begin(),tmp.end(),less<T>());
  // size_t it = lower_bound(tmp.begin(),tmp.end(),-value)-tmp.begin();
  // return it;
}

#endif
