class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> hash;
        
        for(int i=0; i<order.length(); i++){
            hash[order[i]] = i+1;
        }
        
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].length(); j++){
                words[i][j]=hash[words[i][j]];
            }
        }
        return is_sorted(words.begin(),words.end()); //to check whether a sequence is sorted
        
    }
};
