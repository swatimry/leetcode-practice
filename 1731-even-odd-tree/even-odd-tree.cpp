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
bool check(string t,vector<int> store){
    if(t=="even"){
        int prev=store[0];
        if(prev%2==0){
            return false;
        }
       for(int i=1;i<store.size();i++){
          if(store[i]%2==0 || store[i]<=prev){
              return false;
          }
          prev=store[i];
       }
    }
    if(t=="odd"){
        int prev=store[0];
        if(prev%2!=0){
            return false;
        }
       for(int i=1;i<store.size();i++){
          if(store[i]%2!=0 || store[i]>=prev){
            
              return false;
          }
          prev=store[i];
       }
    }
    return true;
}
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        int currlevel=0;
        
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> store;
            for(int i=0;i<n;i++){
                TreeNode *temp=q.front();
                store.push_back(temp->val);
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            cout<<currlevel<<endl;
            if(currlevel%2==0){
              if(check("even",store)==false){
                  return false;
              };
            }else{
               if(check("odd",store)==false){
                  return false;
              };
            }
            currlevel++;
        }
        return true;

    }
};