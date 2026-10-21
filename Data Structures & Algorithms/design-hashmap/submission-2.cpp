class MyHashMap {
    private:
    struct ListNode
    {
        int key , val;
        ListNode* next;

        ListNode(int k = -1 , int v = -1, ListNode* n = nullptr): key(k) , val(v) , next(n) {}

    };

    

    vector <ListNode*> set;  // 


public:
    MyHashMap() {
        set.resize(1000);

        for(auto & k : set)
        k = new ListNode(0);

        
    }
    
    void put(int key, int value) {
        ListNode* cur = set[key % 1000];

        while(cur->next )
        {
            if(cur->next->key == key)
            {
                cur->next->val = value;
                return;
                
            }

            cur = cur->next;

        }

        cur->next = new ListNode(key, value);
        
    }
    
    int get(int key) {
        ListNode *cur = set[key % 1000];
    
        while (cur->next )
        {
            if(cur->next->key == key)
            return cur->next->val;

            cur=cur->next;  
        }

        return -1;



        
    }
    
    void remove(int key) {
        ListNode* cur = set[key%1000];
        while(cur->next)
        {
            if(cur->next->key == key)
            {
                ListNode* temp = cur->next;
                cur->next = temp->next;

                delete temp;

                return;
            }
            cur= cur ->next;
        }

        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */