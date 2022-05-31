class RandomizedSet {
public:
    unordered_map<int,int> map;
    vector<int> v;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(map.count(val) == 0) {
            v.push_back(val);
            map[val] = v.size()-1;
            return 1;
        }
        return 0;
    }
    
    bool remove(int val) {
        auto it = map.find(val);
        if(it == map.end()) return 0;
        int indx = (*it).second;
        swap(v[indx],v[v.size()-1]);
        map[v[indx]] = indx;
        v.pop_back();
        map.erase(val);
        return 1;
    }
    
    int getRandom() {
        int random = rand()%v.size();
        return v[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */