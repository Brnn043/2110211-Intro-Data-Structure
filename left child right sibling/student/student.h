int depth(node *n)
{
  if(n==NULL) return -1;
  int cnt=-1;
  auto it = n->left_child;
  while(it!=NULL) {
    cnt=std::max(cnt,depth(it));
    it=it->right_sibling;
  }
  return cnt+1;
}