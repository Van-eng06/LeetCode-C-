class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i = 0 ; i < words.size() -1; i++){
            int j = i;
            //storing index so that everytime we compare after erasing we compare from the first element
            string s1 = words[i];
            sort(s1.begin(),s1.end());
            string s2 = words[i+1];
            sort(s2.begin(),s2.end());
            // sorting the words after storing into strings to compare if they are anagrams or not
            if(s1 == s2){
                words.erase(words.begin() + i+1);
                //doing the inplace changes
                i = j - 1; // to begin with first element again
                // if this step is not gone through then the comparison will start from next element
            }
         }
        return words;
        
    }
};
