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
     unordered_map<long,int> t;
    int cnt=0;
    void help(TreeNode* root,int targetsum,long cursum){
        if(root==NULL){
            return;
        }
        cursum+=root->val;
        
        if(cursum==targetsum){
            cnt++;
        }
        if(t.find(cursum-targetsum)!=t.end()){
            cnt+=t[cursum-targetsum];
        }
        t[cursum]++;
        help(root->left,targetsum,cursum);
        help(root->right,targetsum,cursum);
        t[cursum]--;
        
        
    }
    int pathSum(TreeNode* root, int targetSum) {
       
        
        help(root,targetSum,0);
        return cnt;
    }
};