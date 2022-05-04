class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0; 
        for(auto it:nums) totalsum+=it; 
        int cursum=0; 
        for(int i=0; i<nums.size(); i++){
           
            if(cursum==(totalsum-cursum-nums[i])) return i; 
             cursum+=nums[i]; 
            
        }
        return -1; 
    }
};
