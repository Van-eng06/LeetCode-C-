class Solution {
public:
    int minPairSum(vector<int>& nums) {
      
      #sorting the vector
        sort(nums.begin(),nums.end());
      #taking l and h to traverse the vector with two pointers
        int n=nums.size(),l=0,h=n-1,val=0;
        while(l<h)
        {
          val=max(val,nums[l++]+nums[h--]);  
        }
        return val;
    }
};
