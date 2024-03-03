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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode * temp1;
        ListNode *temp2;
        ListNode * temp=new ListNode(-1);
        temp->next=head;
        temp1=temp2=temp;
        while(n>0){
            temp1=temp1->next;
            n--;
        }
        if(temp1->next==NULL){
            return head->next;
        }
        while(temp1->next!=NULL){
           temp1=temp1->next;
            temp2=temp2->next;
        }
        temp=temp2->next;
        temp2->next=temp2->next->next;
        delete temp;
        
        return head;
    }
};