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
    int sum=0;
    void help(int curr,TreeNode*root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            sum+=curr*10+root->val;
        }
        help(curr*10+root->val,root->left);
        help(curr*10+root->val,root->right);
    }
    int sumNumbers(TreeNode* root) {
        help(0,root);
        return sum;
    }
};