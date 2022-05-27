class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
        return m;
        
    }
};

/*

1. Array has positive integers:
In this case the three integers giving maximum product will be present at last,second last and third last index

2. Array has both positive and negative integers:
In this case the smallest 2 negative integers and one positive largest integer will give maximum product

*/
