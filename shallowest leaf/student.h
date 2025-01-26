#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if(n==NULL) return -1;
  if(n->left==NULL&&n->right==NULL) return 0;
  int ans=INT_MAX;
  if(n->left!=NULL) ans=std::min(ans,shallowest_leaf(n->left));
  if(n->right!=NULL) ans=std::min(ans,shallowest_leaf(n->right));
  return ans+1;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  return shallowest_leaf(mRoot);
}


#endif
