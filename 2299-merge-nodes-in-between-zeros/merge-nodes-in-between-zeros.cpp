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
        ListNode *start=head;
        ListNode *prevzero=head;
        ListNode *temp=head->next;int curr=0;
        
        while(temp!=NULL){
         
            if(temp->val!=0){
                curr+=temp->val;
            }
            else{
               prevzero->next=temp;
              temp->val=curr;
              prevzero=temp;
           
                curr=0;
            }
            temp=temp->next;
        }
        return start->next;
    }
};