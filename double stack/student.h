#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <vector>

template <typename T>
void CP::stack<T>::pop() {
	// modify method here
	if(stack_a.empty()) {
		if(stack_b.size()==1) {
			stack_b.pop();
			return;
		}
		std::vector<T> v;
		while(!stack_b.empty()) {
			v.push_back(stack_b.top());
			stack_b.pop();
		}
		int sz=v.size();
		if(sz==2) {
			stack_b.push(v[0]);
			stack_a.push(v[1]);
		} else {
			for(int i=sz/2;i>=0;i--) {
				stack_b.push(v[i]);
			}
			for(int i=sz/2+1;i<sz;i++) {
				stack_a.push(v[i]);
			}
		}
	}
	stack_a.pop();
}

template <typename T>
const T& CP::stack<T>::top() {
	// modify method here
	if(stack_a.empty()) {
		if(stack_b.size()==1) return stack_b.top();
		std::vector<T> v;
		while(!stack_b.empty()) {
			v.push_back(stack_b.top());
			stack_b.pop();
		}
		int sz=v.size();
		if(sz==2) {
			stack_b.push(v[0]);
			stack_a.push(v[1]);
		} else {
			for(int i=sz/2;i>=0;i--) {
				stack_b.push(v[i]);
			}
			for(int i=sz/2+1;i<sz;i++) {
				stack_a.push(v[i]);
			}
		}
	}
	return stack_a.top();
}

template <typename T>
const T& CP::stack<T>::bottom() {
	// write your code here
	if(stack_b.empty()) {
		if(stack_a.size()==1) return stack_a.top();
		std::vector<T> v;
		while(!stack_a.empty()) {
			v.push_back(stack_a.top());
			stack_a.pop();
		}
		int sz=v.size();
		if(sz==2) {
			stack_a.push(v[0]);
			stack_b.push(v[1]);
		} else {
			for(int i=sz/2;i<sz;i++) {
				stack_b.push(v[i]);
			}
			for(int i=sz/2-1;i>=0;i--) {
				stack_a.push(v[i]);
			}
		}
	}
	return stack_b.top();
}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	// write your code here
	stack_b.push(element);
}

template <typename T>
void CP::stack<T>::pop_bottom() {
	// write your code here
	if(stack_b.empty()) {
		if(stack_a.size()==1) {
			stack_a.pop();
			return;
		}
		std::vector<T> v;
		while(!stack_a.empty()) {
			v.push_back(stack_a.top());
			stack_a.pop();
		}
		int sz=v.size();
		if(sz==2) {
			stack_a.push(v[0]);
			stack_b.push(v[1]);
		} else {
			for(int i=sz/2;i<sz;i++) {
				stack_b.push(v[i]);
			}
			for(int i=sz/2-1;i>=0;i--) {
				stack_a.push(v[i]);
			}
		}
	}
	stack_b.pop();
}
#endif