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
void help(int &sum,TreeNode * root){
    if(!root){
        return;
    }
    if(root->left && root->left->left==NULL && root->left->right==NULL){
        sum+=root->left->val;
    }
    help(sum,root->left);
    help(sum,root->right);
}
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        help(sum,root);
        return sum;
    }
};