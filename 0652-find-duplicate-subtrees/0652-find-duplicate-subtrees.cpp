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
    string dfs(TreeNode* root,unordered_map<string,int> &m,vector<TreeNode*> &result){
        if(!root){
            return "N";
        }
        string l=dfs(root->left,m,result);
        string r=dfs(root->right,m,result);
        string s=to_string(root->val)+","+l+","+r;
       
        if(m.find(s)==m.end()){
            m[s]++;
        }
        else if(m[s]==1){
            result.push_back(root);
            m[s]++;
        }
        return s;
        
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> result;
        unordered_map<string,int> m;
        dfs(root,m,result);
        return result;
    }
};