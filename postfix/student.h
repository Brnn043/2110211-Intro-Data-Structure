#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
    stack<int> s;
    for(auto [op,x]:v) {
      if(op==1) s.push(x);
      else if(op==0){
        int u=s.top();
        s.pop();
        int v=s.top();
        s.pop();
        if(x==0) s.push(u+v);
        else if(x==1) s.push(v-u);
        else if(x==2) s.push(u*v);
        else if(x==3) s.push(v/u);
      }
    }
    return s.top();
}

#endif
