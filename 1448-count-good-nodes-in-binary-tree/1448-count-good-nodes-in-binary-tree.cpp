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
    void count(TreeNode *temp,int &cnt,int curmax){
        if(temp==NULL){
            return;
        }
        if(curmax<=temp->val){
            cnt++;
            curmax=temp->val;
            
            }
            count(temp->left,cnt,curmax);
            count(temp->right,cnt,curmax);
           
        
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
       
       
        int cnt=1;
        count(root->left,cnt,root->val);
        count(root->right,cnt,root->val);
        return cnt;
    }
};