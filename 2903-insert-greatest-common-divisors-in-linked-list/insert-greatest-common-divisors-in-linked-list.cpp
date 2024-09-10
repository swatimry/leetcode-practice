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
    int help(int a,int b){
          int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    // Return gcd of a and b
    return result;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp=head->next;
        ListNode *prev=head;
        while(temp){
            int gcdans=help(prev->val,temp->val);
            ListNode * gcdnode=new ListNode(gcdans);
            prev->next=gcdnode;
            gcdnode->next=temp;
            prev=temp;
            temp=temp->next;

        }
        return head;
    }
};