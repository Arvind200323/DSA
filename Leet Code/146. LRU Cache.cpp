class LRUCache {
public:
    class DLL{
        public:
        int key;
        int val;
        DLL* next;
        DLL* prev;
        DLL(int _key,int _val)
        {
            key=_key;
            val=_val;
        }
    };
    DLL* head=new DLL(-1,-1);
    DLL* tail=new DLL(-1,-1);
    
    int c;
    unordered_map<int,DLL*> mpp;

    LRUCache(int capacity) {
        c=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    void addnode(DLL* newnode)
    {
        DLL* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
    void deletenode(DLL* delnode)
    {
        DLL* deleteprev=delnode->prev;
        DLL* deletenext=delnode->next;
        deleteprev->next=deletenext;
        deletenext->prev=deleteprev;
    }

    int get(int key) {
        if(mpp.find(key)!=mpp.end())
        {
            DLL* resnode=mpp[key];
            int res=resnode->val;
            mpp.erase(key);
            deletenode(resnode);
            addnode(resnode);
            mpp[key]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end())
        {
            DLL* existingnode=mpp[key];
            mpp.erase(key);
            deletenode(existingnode);
        }
        if(mpp.size()==c)
        {
            mpp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new DLL(key,value));
        mpp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
