#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(m<=0) return false;
  if(a<begin()||a>=end()) return false;
  if(b<begin()||b>=end()) return false;
  if(a+m-1>=end()||b+m-1>=end()) return false;
  if(b<a) std::swap(a,b);
  if(a+m-1>=b) return false;
  for(int i=0;i<m;i++) {
    std::swap(*(a+i),*(b+i));
  }
  return true;
}

#endif
