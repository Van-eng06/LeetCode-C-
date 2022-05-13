class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> m;
        if (ransomNote.size() > magazine.size())
            return false;
        for (int i = 0; i < magazine.size(); ++i) 
            m[magazine[i]]++;
        for (int i = 0; i < ransomNote.size(); ++i)
        {
            if (m[ransomNote[i]] > 0) 
                --m[ransomNote[i]]; 
            else 
                 return false;
        }
            
       
        return true;
    }
};
