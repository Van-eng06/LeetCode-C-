class Solution {
public:
    bool isAnagram(string s, string t)
    {
        //Check size of both strings
        if(s.size()!=t.size()) return 0;
        map<char,int> m1,m2;    
        for(char c:s)
            m1[c]++;
        for(char c:t)
            m2[c]++;
        return m1==m2;
    }
};
