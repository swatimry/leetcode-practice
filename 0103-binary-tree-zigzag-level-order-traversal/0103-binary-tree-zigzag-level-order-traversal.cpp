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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        int lr=1;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            
                vector<int> t;
                for(int i=0;i<n;i++){
                    TreeNode *temp=q.front();
                    q.pop();
                    t.push_back(temp->val);
                    if(temp->left){
                        q.push(temp->left);
                    }
                    if(temp->right){
                        q.push(temp->right);
                    }
                }
            
            if(lr==1){
                cout<<lr<<"here";
                ans.push_back(t);
                lr=-1;}
            else{
                cout<<"hereewwfsf";
                reverse(t.begin(),t.end());
                ans.push_back(t);
                lr=1;
                
            }
            
        }
        return ans;
    }
};