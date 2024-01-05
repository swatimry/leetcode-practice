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
    TreeNode *help(int s,int e,vector<int>& preorder){
        if(s>e){
            return NULL;
        }
        if(s==e){
            TreeNode *root=new TreeNode(preorder[s]);
            return root;
        }
        TreeNode *root=new TreeNode(preorder[s]);
        int j=s;
        for(int i=s;i<=e;i++){
            if(preorder[i]<preorder[s]){
                j++;
            }
        }
        TreeNode *leftr=help(s+1,j,preorder);
        TreeNode *rightr=help(j+1,e,preorder);
        root->left=leftr;
        
        root->right=rightr;
            return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0){
            return NULL;
        }
        if(preorder.size()==1){
             TreeNode *root=new TreeNode(preorder[0]);
            return root;
        }
        return help(0,preorder.size()-1,preorder);
    }
};