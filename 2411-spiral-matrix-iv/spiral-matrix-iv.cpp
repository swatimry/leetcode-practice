/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int> (n,-1));
        ListNode* temp=head;
        int top=0;int bottom=m-1; int left=0;int right=n-1;
        while(top<=bottom && left<=right && temp!=NULL){
            for(int i=left;i<=right;i++){
                if(temp!=NULL){
                    ans[top][i]=temp->val;
                    temp=temp->next;
                }
            }
            top++;
            for(int i=top;i<=bottom;i++){
                if(temp!=NULL){
                    ans[i][right]=temp->val;
                    temp=temp->next;
                }


            }
            right--;
            for(int i=right;i>=left;i--){
                if(temp!=NULL){
                    ans[bottom][i]=temp->val;
                    temp=temp->next;
                }
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                if(temp!=NULL){
                    ans[i][left]=temp->val;
                    temp=temp->next;
                }
            }
            left++;
        }
        return ans;
    }
};