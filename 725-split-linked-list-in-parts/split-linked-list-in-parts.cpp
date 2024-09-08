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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       int n=0;
       ListNode *temp=head;
       while(temp){
         n++;
         temp=temp->next;
       }   
       vector<ListNode*> ans;
    
       ListNode *start=head;
       temp=head;
       int size=n/k;
       
       int curr=1;
       int rem=n%k;
       if(size==0){
        size=1;
        rem=0;
       }
       while(temp!=NULL){
          if(curr==1){
            start=temp;
          }
          if(curr==size){
            if(rem>0){
                if(temp->next!=NULL){
                    temp=temp->next;
                }
                    rem--;
            }
            ListNode * end=temp;
            temp=temp->next;
            end->next=NULL;
            curr=1;
            ans.push_back(start);
            continue;
          }
          temp=temp->next;
          curr++;
       }
       int x=(k)-ans.size();
       while(x>0){
    ans.push_back(NULL);x--;
       }
       return ans;
    }
};