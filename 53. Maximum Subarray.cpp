class Solution {
public:
    
// Kadane's Algorithm
//The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array. And keep track of maximum sum contiguous segment among all positive segments
    
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};
