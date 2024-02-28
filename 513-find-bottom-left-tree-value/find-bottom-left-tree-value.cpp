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
TreeNode* prev=NULL;
int level=-1;
    void help(TreeNode * root,int curr){
        if(!root){
            return;
        }
        if(level<curr){
            level=curr;
            prev=root;
        }
       help(root->left,curr+1);
       help(root->right,curr+1);

    }
    int findBottomLeftValue(TreeNode* root) {
        help(root,0);
        return prev->val;
    }
};