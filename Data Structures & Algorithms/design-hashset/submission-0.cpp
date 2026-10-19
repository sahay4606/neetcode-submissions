class MyHashSet {
private:

    // linked list , set ( the dummy node) , the  hash function ,key (the precise unit place mod funciton ) 

    struct ListNode {
        int key;
        ListNode* next;

        ListNode(int k) : key(k) , next(nullptr)
        {}
    };

    vector <ListNode*> set;//

    int hash(int key) 
    {
        return key % set.size();//
    }

public:

 // resize , assign the heads of all dummy 
    MyHashSet() {
        set.resize(10000); //
        for(auto& bucket : set) 
        {
            bucket = new ListNode(0);
        }

        
    }
    // key is full original .. when passed to hash then becomes different (unit place)
    
    void add(int key) {

        ListNode* cur = set[hash(key)];
        while(cur->next)
        {
            if(cur->next->key == key)//
            return;

            cur= cur->next;
            
        }
        cur->next = new ListNode(key);
        
        
    }
    
    void remove(int key) {

        ListNode* cur = set[hash(key)];
        while(cur->next)
        {
            if(cur->next->key == key)
            {
            ListNode* temp = cur->next;
            cur->next = temp ->next;
            // cur -> next = cur -> next->next;
            delete temp;
            return;
            }

            cur = cur->next;
        }
        
    }
    
    bool contains(int key) {

        ListNode* cur = set[hash(key)];
        while(cur->next) 
        {
            if ( cur->next-> key == key)
            return true;

            cur= cur->next;
        }
            return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */