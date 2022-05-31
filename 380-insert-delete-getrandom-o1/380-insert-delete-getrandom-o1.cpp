class RandomizedSet {
public:
    unordered_set<int> set;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(set.count(val) == 0) {
            set.insert(val);
            return 1;
        }
        return 0;
    }
    
    bool remove(int val) {
        if(set.count(val) != 0) {
            set.erase(val);
            return 1;
        }
        return 0;
    }
    
    int getRandom() {
        auto it = set.cbegin();
        int random = rand() % set.size();
        std::advance(it, random);
        return *it;
    }


};

















/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */