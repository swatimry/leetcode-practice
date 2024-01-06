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
    TreeNode* maketree(vector<int> temp,int s,int e){
        if(s>e){
            return NULL;
        }
        if(s==e){
             TreeNode *root = new TreeNode(temp[s]);
            return root;
        }
        int m= s+(e-s)/2;
        TreeNode *root = new TreeNode(temp[m]);
        TreeNode *ll=maketree(temp,s,m-1);
        TreeNode *rr=maketree(temp,m+1,e);
        root->left=ll;
        root->right=rr;
        return root;
    }
    void inorder(vector<int> &temp,TreeNode *root){
        if(!root)return;
        inorder(temp,root->left);
        temp.push_back(root->val);
        inorder(temp,root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
       vector<int> temp;
        inorder(temp,root);
        int n=temp.size();
        return maketree(temp,0,n-1);
    }
};