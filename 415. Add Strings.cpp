class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size()){
            swap(num1,num2);
        } // because we are considering num1 smaller in all cases
        int n1 = num1.size(); //string sizes
        int n2 = num2.size();
        reverse(num1.begin(),num1.end()); //use reverse or we can traverse the strings from back as well
        reverse(num2.begin(),num2.end());
        int carry =0;
        string sum =""; // for storing the final sum
        
        for(int i =0;i<n1;i++){
            int num = ((num1[i]-'0')+(num2[i]-'0')+carry);
            sum+=(num%10)+'0';
            carry = num/10;
        }
        // since num1 is smaller there must be values left in num2
        for(int i =n1;i<n2;i++){
            int num = ((num2[i]-'0')+carry);
            sum+=(num%10)+'0';
            carry = num/10;
        }
        // it might be possible that we have a carry left in last loop
        if(carry){
            sum+=(carry+'0');
        }
        reverse(sum.begin(),sum.end());
        int j =0;
        while(sum[j]=='0' && sum.size()>1){
            sum.erase(0,1); //when we get the 0 at the beginning // 0 is position and 1 is length
        }
        return sum;
    }
};
