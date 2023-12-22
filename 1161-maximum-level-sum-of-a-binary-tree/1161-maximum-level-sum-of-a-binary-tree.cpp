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
    int maxLevelSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        queue<TreeNode*> q;
        int level=0;
        int sum=INT_MIN;
        q.push(root);
        int curlevel=0;
        while(!q.empty()){
           int n=q.size();
           int tempsum=0;
           curlevel++;
           while(n-->0){
              TreeNode* temp=q.front();
              q.pop();
              tempsum+=temp->val;
              if(temp->left){
                  q.push(temp->left);
              }
              if(temp->right){
                  q.push(temp->right);
              }
           }
          if(tempsum>sum){
              level=curlevel;
              sum=tempsum;
          }
        }
        return level;


    }
};