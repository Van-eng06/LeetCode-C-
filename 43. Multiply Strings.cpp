class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        if(num1.length()==1 && num1[0]=='0' || num2.length()==1 && num2[0]=='0')
            return "0"; // if any of the string is zero multiplication becomes zero
        
        int l1 = num1.length(); // lengths of the strings
        int l2 = num2.length();
        
        vector<int> a(l1+l2); //initialising vector with length equivalent to the sum of lengths of both strings
        
        for(int i=0;i<l1;i++)
        {
            for(int j=0;j<l2;j++)
            {
                a[i+j] += (num1[i]-'0') * (num2[j]-'0');
                
                a[i+j+1] += a[i+j]/10; 
                a[i+j] = a[i+j]%10;
            }
        }
        
        reverse(a.begin(),a.end());

        int i=0;
        while(a[i]==0 && i<a.size()) i++;

        string ans= "";
        for(int j=i;j<a.size();j++)
            ans+=to_string(a[j]);
        
        return ans;
    }
};
