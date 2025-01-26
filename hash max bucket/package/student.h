#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename HasherT,
          typename EqualT>
size_t CP::unordered_map<KeyT,MappedT,HasherT,EqualT>::max_bucket_length() {
    size_t sz = 0;
    for(auto bucket: mBuckets) sz=std::max(sz,bucket.size());
    return sz;
}

#endif
