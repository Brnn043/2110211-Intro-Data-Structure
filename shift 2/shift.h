void shift(int k) {
	int n = mSize;
	k = (k%n+n)%n;
	if(k==0) return;
	auto it = begin();
	for(int i=0;i<k;i++) ++it;

	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;

	mHeader->prev = it.ptr->prev;
	it.ptr->prev->next = mHeader;
	mHeader->next = it.ptr;
	it.ptr->prev = mHeader;
}
