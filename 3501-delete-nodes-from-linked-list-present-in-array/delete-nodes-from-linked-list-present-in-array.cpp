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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode *prev =new ListNode(-1);
        prev->next==head;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        ListNode *temp=head;
        while(temp!=NULL){
            if(s.find(temp->val)!=s.end()){
                if(temp==head){
                    head=temp->next;
                }
                prev->next=temp->next;
                temp=temp->next;
                continue;
            }
            prev=temp;
            temp=temp->next;
            
        }
        return head;
    }
};