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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *anshead=new ListNode(-1);
        ListNode *currnode=anshead;int curr=0;
        head=head->next;
        while(head!=NULL){
            
            if(head->val!=0){
                curr+=head->val;
            }else{
                ListNode *temp=new ListNode(curr);
                currnode->next=temp;
                currnode=currnode->next;
                curr=0;
            }
            head=head->next;
        }
        return anshead->next;
    }
};