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
    void help(bool dir,TreeNode* root,int cur){
        if(!root){
            return;
        }
        ans=max(ans,cur);
        if(dir==true){
            help(false,root->left,cur+1);
            help(true,root->right,1);

        }
        else{
            help(true,root->right,cur+1);
            help(false,root->left,1);
        }

    }
    int longestZigZag(TreeNode* root) {
         help(true,root,0);
        help(false,root,0);
        return ans;
    }
};