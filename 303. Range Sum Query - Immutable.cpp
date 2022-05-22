class NumArray {
public:
    vector<int> prefix;
    
    NumArray(vector<int>& nums) {
        
        for(int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i] + nums[i-1];
        }
        prefix = nums;
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return prefix[right];
        return prefix[right] - prefix[left-1];
    }
};
