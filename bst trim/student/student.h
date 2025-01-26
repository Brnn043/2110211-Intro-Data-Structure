#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,int level,int tmp) {
    //you MAY need to use this function
    if(n==NULL) return;
    if(tmp>level) {
        child_link(n->parent,n->data.first) = NULL;
        delete_all_nodes(n);
        return;
    }
    mSize++;
    if(n->left!=NULL) my_recur(n->left,level,tmp+1);
    if(n->right!=NULL) my_recur(n->right,level,tmp+1);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::trim(int depth) {
    mSize = 0;
   my_recur(mRoot,depth,0);
}

#endif
