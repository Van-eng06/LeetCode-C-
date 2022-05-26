class RandomizedSet {
    vector<int> v;
    unordered_map<int,int> mymap;
    
public:
    //initialize your data structure
    RandomizedSet() { }
    
    /*inserts a value to the set(array+map). return true if the set didn't already contain the specified element*/
    bool insert(int val) {
        if(mymap.find(val) != mymap.end())
            return false;
        
        v.pb(val); //insert the element at the end of the array
        mymap[val] = v.size()-1;
        return true;
    }
    
    /*removes a value from the set(array +map). returns true if the set contained the specified element*/
    bool remove(int val) {
    
        if(!mymap.count(val))
            return false;
    
           mymap[v.back()]=mymap[val];//it will store ele as a key & index of ele as value of the key
          swap(v.back(),v[mymap[val]]);//replaces the ele that v want to delete with the last ele of the array
      
      v.pop_back();//removing the last ele from the array
      mymap.erase(val);//delete val from map also
    
  return true;
}
 
    /*get a random element from the set*/
    int getRandom() {
        return v[rand()%v.size()]; //rand() will return the index of random value generated & we're using % so that random value would be generated within the range of an array, i.e from 1 to size-1 
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
