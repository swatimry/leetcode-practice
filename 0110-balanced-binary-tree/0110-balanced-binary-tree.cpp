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
    pair<bool,int> help(TreeNode *root){
        if(root==NULL){
            return {true,1};
        }
        pair<bool,int> l=help(root->left);
        pair<bool,int> r=help(root->right);
        if(abs(l.second-r.second)>1 || l.first==false || r.first==false){
            return {false,0};
        }
        return {true,max(l.second,r.second)+1};
        
    }
    bool isBalanced(TreeNode* root) {
        pair<bool,int> ans=help(root);
        return ans.first;
    }
};