class TimeMap {
public:
    unordered_map<string, map<int, string, greater<int>>> mp;
    // map inside map to store all the three key, value and timestamp together
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value; //storing the values
    }
    
    string get(string key, int timestamp) {
        
        auto &v = mp[key]; // pointing towards the particular key that has been passed
        
        auto itm = v.lower_bound(timestamp); //function returns an iterator pointing to the next smallest timestamp just greater than or equal to the given timestamp
        if(itm == v.end()) return ""; //if timestamp isn't found we return empty string
        
        return itm->second; //otherwise return the string value

    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
