/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void solve(vector<int> &v, TreeNode* h){
    if (h==NULL) return;
    solve(v,h->left);
    v.push_back(h->val);
    solve(v,h->right);
  
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> v;
    solve(v,A);
    return v;
    
    
}
