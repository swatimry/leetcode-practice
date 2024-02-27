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
 int ans=0;
 int help(TreeNode *root){
     if(!root){
         return 0;
     }
  
   
        int l=help(root->left);
        int r=help(root->right);
        
        ans= max(ans,l+r);
        int dia=max(l,r)+1;
        return dia;
 }
    int diameterOfBinaryTree(TreeNode* root) {
       help(root);
       return ans;
    }
};