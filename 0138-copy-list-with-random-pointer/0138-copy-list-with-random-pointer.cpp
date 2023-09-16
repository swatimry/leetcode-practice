/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*,Node*> map;
      Node *temp=head;
      while(temp!=NULL){
          Node *tempcopy=new Node(temp->val);
          map[temp]=tempcopy;
          temp=temp->next;
      }   
      temp=head;
      
      while(temp!=NULL){
          Node *tempnextcopy=map[temp->next];
          Node *randomcopy=map[temp->random];
          Node *tempcopy=map[temp];
          tempcopy->next=tempnextcopy;
          tempcopy->random=randomcopy;
          temp=temp->next;


      }
     
      Node * copyhead=map[head];
      return copyhead;
    }
};