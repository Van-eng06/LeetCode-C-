class Solution {
public:
    string largestGoodInteger(string num) {
        string s="",ans="";
        for(int i=0;i<num.length()-2;i++)
        {
          s="";
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                s=s+num[i];
                s=s+num[i+1];
                s=s+num[i+2];
                ans=max(s,ans);
                
            }
            
        }
        return ans;
        
    }
};
