#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n=3;
        adj.resize(3);
        for(int i=0;i<3;i++) adj[i].resize(3);
    }

    DenseGraph(int n_in) {
        // Your code here
        n=n_in;
        adj.resize(n_in);
        for(int i=0;i<n_in;i++) adj[i].resize(n_in);
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n=G.n;
        adj=G.adj;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if(a>=n||b>=n) return;
        adj[a][b]=true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(a>=n||b>=n) return;
        adj[a][b]=false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if(a>=n||b>=n) return false;
        return adj[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph tmpp(n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) if(adj[i][j]) tmpp.adj[j][i]=true;
        }
        return tmpp;
    }

protected:
    int n;
    vector<vector<bool>> adj;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
