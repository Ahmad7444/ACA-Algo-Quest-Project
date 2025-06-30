/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
string finder(TreeNode* A,int num, string s = "0"){
    if (A==NULL) return "0";
    if (A->val==num) {s[0]='1'; return s;}
    string sl=finder(A->left,num,s+"L");
    if (sl!="0") return sl; 
    return finder(A->right,num,s+"R");
}
int Solution::lca(TreeNode* A, int B, int C) {
    string s1=finder(A,B);
    string s2=finder(A,C);
    int i=1;
    if (s1=="0" || s2=="0"){
        return -1;
    }
    auto  F=A;
    while(s1[i]==s2[i] && i<min(s1.length(),s2.length()) ){
        if (s1[i]=='L'){
            F=F->left;
        }
        else F=F->right;
        i++;
        
    }
    return F->val;
}
