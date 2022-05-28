class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int start = 0;
        int maxCount = 0;
        int zeroCount = 0;
        
        for(int end = 0; end < nums.size(); end++) {
            int curInt = nums[end];
            
            if(curInt == 0) {
                zeroCount++; // to keep the count of zeroes in our window, we can't have more than k zeroes in window at a time
            }
            
            while(zeroCount > k) {
                if(nums[start] == 0) { // if the zerocount increases more than limit then we need to decrease it and slide the window
                    zeroCount--;
                }
                start++;
            }
            
            maxCount = max(maxCount, end - start + 1);
        }
        
        return maxCount;
        
    }
};
