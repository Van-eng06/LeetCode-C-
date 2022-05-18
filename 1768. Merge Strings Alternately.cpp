class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int a = word1.length(),b=word2.length(),i=0;
        int minn = min(a,b);
        for(;i<minn;i++){
            ans += word1[i];
            ans += word2[i];
        }
        if(i<a){
            while(i<a) 
                ans += word1[i++];
        }
        if(i<b){
            while(i<b) 
                ans += word2[i++];
        }
        return ans;
    }
};
