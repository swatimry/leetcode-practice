class LRUCache {
public:
   class node{
       public:
       int key,val;
       node *prev; node *next;
       node(int key,int val){
           this->key=key;
           this->val=val;
       }
      
   };
    node *head=new node(-1,-1);
       node *tail=new node(-1,-1);
       int capacity;
      
       unordered_map<int,node*> m;
    LRUCache(int capacity) {
        this->capacity=capacity;
       
        head->next=tail;
        tail->prev=head;
    }
    void addnode(node * toadd){
        node *temp=head->next;
        temp->prev=toadd;
        toadd->next=temp;
        toadd->prev=head;
        head->next=toadd;
    }
    void delenode(node *todel){
         node * todelprev=todel->prev;
         node *todelnext=todel->next;
         todelprev->next=todelnext;
         todelnext->prev=todelprev;
    }

    int get(int key) {
        if(m.find(key)!=m.end()){
           node *resnode=m[key];
           int ans=resnode->val;
           m.erase(key);
           delenode(resnode);
           addnode(resnode);
           m[key]=head->next;
           return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            node *exis=m[key];
            m.erase(key);
            delenode(exis);
        
        }
        if(m.size()==capacity){
            
            m.erase(tail->prev->key);
            delenode(tail->prev);
        }
           
            addnode(new node(key,value));
            m[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */