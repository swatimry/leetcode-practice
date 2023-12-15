/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int ans=INT_MIN;
int lhelp(TreeNode * root){
    if(root==NULL){
        return 0;    }
     int l=lhelp(root->left);
     int r=lhelp(root->right);
     ans=max(ans,l+r+1);
     return max(l,r)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        lhelp(root);
        return ans-1;
    }
};