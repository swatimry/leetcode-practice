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
    int help(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int l=help(root->left);
        int r=help(root->right);
        ans=max(ans,1+l+r);
        return 1+max(l,r);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        help(root);
        return ans-1;
    }
};