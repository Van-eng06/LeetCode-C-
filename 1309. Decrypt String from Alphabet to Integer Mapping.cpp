class Solution {
public:
    string freqAlphabets(string s) {
        string res;
        for(int i=0;i<s.size();i++){
            if(i+2<s.size() && s[i+2]=='#'){
                res += (s[i]-'0')*10 + (s[i+1]-'0') + 96;
                i+=2;
            }else{
                res += s[i]-'0' + 96;
            }
        }
        return res;
    }
};
