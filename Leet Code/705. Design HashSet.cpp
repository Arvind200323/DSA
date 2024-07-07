class MyHashSet {
public:
int set[1000001];
    MyHashSet() {
        memset(set,-1,sizeof(set));
    }
    void add(int key) {
        set[key]=key;
    }
    void remove(int key) {
        set[key]=-1;
    }
    bool contains(int key) {
        if(set[key]==-1) return false;
        else return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
