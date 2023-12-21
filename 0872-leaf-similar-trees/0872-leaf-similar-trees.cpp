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
    void findleaves(TreeNode * root,vector<int> &temp){
        
        if(root==NULL){
            return;
        }
        findleaves(root->left,temp);
        if(!root->left && !root->right){
            temp.push_back(root->val);
        }
        findleaves(root->right,temp);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        findleaves(root1,leaf1);
        findleaves(root2,leaf2);
        if(leaf1.size()==leaf2.size()){
            for(int i=0;i<leaf1.size();i++){
                if(leaf1[i]!=leaf2[i]){
                    return false;
                }
            }
            
        }
        else{
            return false;
        }
        return true;
    }
};