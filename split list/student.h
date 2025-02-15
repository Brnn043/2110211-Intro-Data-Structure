void splitList(list<T>& list1, list<T>& list2) {
    int sz = (mSize+1)/2; //list1 size
    auto it = begin();
    for(int i=0;i<sz;i++) ++it;

    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev = it.ptr->prev;
    it.ptr->prev->next = list1.mHeader;
    list1.mSize += sz;

    list2.mHeader->prev->next = it.ptr;
    it.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mSize += (mSize-sz);

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize=0;
}
