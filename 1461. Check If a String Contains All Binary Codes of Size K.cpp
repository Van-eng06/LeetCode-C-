class Solution {
public:
    bool hasAllCodes(string s, int k){
        if(s.length()==1 || s.length()<k)return false;
        unordered_map<string,int>m; 
        // for counting the substrings or binary codes of size k
        for(int i=0;i<=s.length()-k;i++){
            string sub = s.substr(i,k); 
            // using inbuilt function to define substrings of k length
            m[sub]++;
        }
        int total = pow(2,k); 
        //total number of substrings that can be formed with given k
        
        if(total==m.size())return true; 
        //comparing the stored size of hashmap, 
        // if it is equal to total number of predictions
        // it means all binary codes of length k are present in hashmap
        // otherwise return false
        return false;
    }
};
