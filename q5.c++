/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    auto h=A;
    TreeNode* lastLnode=NULL;
    while(h!=NULL && h->val!=B){
        if (h->val>B){
            lastLnode=h;
            h=h->left;
        }
        else {
            h=h->right;
        }
        
    }
    if (h->right!=NULL) h=h->right;
    else return lastLnode;
    while(h->left!=NULL){
        h=h->left;
    }
    
    return h;
}
