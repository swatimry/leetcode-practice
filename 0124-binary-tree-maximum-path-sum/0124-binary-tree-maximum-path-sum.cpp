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

   int help(TreeNode * root,int &ans){
        if(root==NULL){
            return 0;
        }
       
        
        int l=help(root->left,ans);
        int r=help(root->right,ans);
        int temp=max(root->val,max(l,r)+root->val);
        int res=max(temp,l+r+root->val);
         ans=max(ans,res);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
         if(root->left==NULL && root->right==NULL){
            return root->val;
        }
        int ans=INT_MIN;
        help(root,ans);
         return ans;
       
    }
};