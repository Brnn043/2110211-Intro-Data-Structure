void replace(const T& x, CP::list<T>& y) {
			//write your code here
			auto start = begin();
			while(start!=end()) {
				if(*start==x) {
					auto next_node = start.ptr->next;
					for(auto it = y.begin();it!=y.end();it++) {
						insert(start,*it);
					}
					erase(start);
					start = next_node;
				} else ++start;
			}
		}