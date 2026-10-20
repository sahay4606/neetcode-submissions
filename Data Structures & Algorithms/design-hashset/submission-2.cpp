
#include <cstring>
class MyHashSet {
    private:
   static const int n = 1000000/32 + 1;
    int set[n];

    int getmask(int key)
    {
        return 1 << key% 32 ;
    }

public:
    MyHashSet() {

        memset(set, 0 , sizeof(set));
        
    }
    
    void add(int key) {
        set[key/32] |= getmask(key);
        
    }
    
    void remove(int key) {
        if(contains(key))
        {
            set[key/32] ^= getmask(key);
        }
        
    }
    
    bool contains(int key) {
        if(set[key/32] & getmask(key))
        return true;

        else 
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