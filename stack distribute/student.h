#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  int a=size()/k,b=size()%k;
  int now=mSize-1;
  std::vector<std::vector<T>> ans;
  for(int i=0;i<b;i++) {
    std::vector<T> tmp;
    for(int j=0;j<a+1;j++) {
      tmp.push_back(mData[now--]);
    }
    ans.push_back(tmp);
  }

  for(int i=0;i<k-b;i++) {
    std::vector<T> tmp;
    for(int j=0;j<a;j++) {
      tmp.push_back(mData[now--]);
    }
    ans.push_back(tmp);
  }

  return ans;
}
#endif
