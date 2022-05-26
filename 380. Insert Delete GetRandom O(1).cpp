class RandomizedSet {
private:
    vector<int> listArray; 
    unordered_map<int,int> map;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(map.find(val) != map.end())
       {
           return false;
       }
       listArray.push_back(val);
       map[val] = listArray.size()-1;
       return true;
    }
    
    bool remove(int val) {
       if(map.find(val) == map.end())
       {
           return false;
       }
        int last_elem = listArray.back();
        listArray[map[val]] = last_elem;
        listArray.pop_back();
        map[last_elem] = map[val];
        map.erase(val);
        return true;
        
    }
    
    int getRandom() {
        return listArray[rand()%listArray.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
