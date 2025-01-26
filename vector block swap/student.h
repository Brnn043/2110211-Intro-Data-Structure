#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(m<=0) return false;
  if(a-begin()<0||a-begin()+m-1>=mSize) return false;
  if(b-begin()<0||b-begin()+m-1>=mSize) return false;
  if(a==b) return false;
  if(a<b&&a+m-1>=b) return false;
  if(b<a&&b+m-1>=a) return false;
  for(size_t i=0;i<m;i++) {
    std::swap(*(a+i),*(b+i));
  }
  return true;
}

#endif
