#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  auto it = mHeader->next;
  while(it!=mHeader) {
    if(it->data == value) {
      auto next_node = it->next;
      auto prev_node = it->prev;

      prev_node->next = next_node;
      next_node->prev = prev_node;

      mSize--;
      delete it;
      it = next_node;

    } else it=it->next;
  }
}

#endif
