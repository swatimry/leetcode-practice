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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       
        vector<int> points;
        int pos=1;
        ListNode * temp=head->next;
        ListNode *prev=head;
        while( temp->next!=NULL ){
            pos++;
            if((temp->val<temp->next->val && temp->val<prev->val)  || (temp->val>temp->next->val && temp->val>prev->val)){
                points.push_back(pos);
            }
            prev=temp;
            temp=temp->next;
        }
        if(points.size()<2){
            vector<int> ans; ans.push_back(-1);ans.push_back(-1);
            return ans;
        }
        vector<int> ans;
      
       int mini=INT_MAX,maxi=INT_MIN;
       for(int i=0;i<points.size()-1;i++){
        mini=min(mini,points[i+1]-points[i]);
     
       }
       ans.push_back(mini);ans.push_back(points[points.size()-1]-points[0]);
        return ans;
    }
};