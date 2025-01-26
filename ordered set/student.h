#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> tmp;
    for(int i=0;i<A.size();i++) tmp.insert(A[i]);
    v.assign(A.begin(),A.end());
    for(int i=0;i<B.size();i++) {
        if(tmp.find(B[i])==tmp.end()) {
            v.push_back(B[i]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> tmp;
    for(int i=0;i<B.size();i++) tmp.insert(B[i]);
    for(int i=0;i<A.size();i++) {
        if(tmp.find(A[i])!=tmp.end()) v.push_back(A[i]);
    }
    return v;
}
