#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "map_bst.h"


template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT,MappedT,CompareT>::iterator CP::map_bst<KeyT,MappedT,CompareT>::recursive(node* n,CP::map_bst<KeyT,MappedT,CompareT>::iterator p, CP::map_bst<KeyT,MappedT,CompareT>::iterator q) const
{
    //find min
    auto min = (mLess((*p).first,(*q).first)?(*p).first:(*q).first);
    auto max = (mLess((*p).first,(*q).first)?(*q).first:(*p).first);
    //n < both
    if(mLess(n->data.first,min)) return recursive(n->right,p,q);

    //n > both
    if(mLess(max,n->data.first)) return recursive(n->left,p,q);

    return iterator(n);
    // You may need this function
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT,MappedT,CompareT>::iterator CP::map_bst<KeyT,MappedT,CompareT>::lca(CP::map_bst<KeyT,MappedT,CompareT>::iterator p, CP::map_bst<KeyT,MappedT,CompareT>::iterator q) const
{
    if((*p).first==(*q).first) return p;
    return recursive(mRoot,p,q);
    // Write your code here
}

#endif

