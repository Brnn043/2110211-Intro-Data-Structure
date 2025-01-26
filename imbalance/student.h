// Your code here

int getHeight(node* n,int &mx,KeyT &ans) {
    if(n==NULL) return -1;
    int lh = getHeight(n->left,mx,ans) , rh = getHeight(n->right,mx,ans);
    if(abs(lh-rh)>mx || abs(lh-rh)==mx && (mx==-1||mLess(n->data.first,ans))) {
        mx=abs(lh-rh);
        ans=n->data.first;
    }
    return std::max(lh,rh)+1;
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int mx=-1;
    KeyT ans;
    getHeight(mRoot,mx,ans);
    return ans;
}
