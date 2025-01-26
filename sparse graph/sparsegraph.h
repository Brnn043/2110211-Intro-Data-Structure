#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <map>
#include <set>
#include <vector>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        n=3;
        adj.resize(3);
    }

    SparseGraph(int n_in) {
        // Your code here
        n=n_in;
        adj.resize(n_in);
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        n=G.n;
        adj=G.adj;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if(a>=n||b>=n) return;
        adj[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(a>=n||b>=n) return;
        adj[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if(a>=n||b>=n) return false;
        return adj[a].find(b)!=adj[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph tmpp(n);
        for(int i=0;i<n;i++) {
            for(auto &x:adj[i]) tmpp.adj[x].insert(i);
        }
        return tmpp;
    }

protected:
    // Your code here
    vector<set<int>> adj;
    int n;
};
#endif // __SPARSE_GRAPH_H__

