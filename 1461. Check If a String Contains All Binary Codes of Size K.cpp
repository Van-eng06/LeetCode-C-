class Solution {
public:
    bool hasAllCodes(string s, int k){
        if(s.length()==1 || s.length()<k)return false;
        unordered_map<string,int>m;
        for(int i=0;i<=s.length()-k;i++){
            string sub = s.substr(i,k);
            m[sub]++;
        }
        int total = pow(2,k);
        if(total==m.size())return true;
        return false;
    }
};
