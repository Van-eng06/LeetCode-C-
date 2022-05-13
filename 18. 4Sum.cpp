class Solution {
   public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //sorting
        sort(nums.begin(), nums.end());
        int len = nums.size();
        //if the length of nums is less than 4, we can't 
        if (len < 4) {
            return {};
        }
        
        //vector to store the final result
        vector<vector<int>> res;
        for (int i = 0; i < len - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < len - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int high = len - 1;
                int low = j + 1;
                while (low < high) {
                    long sum = (long)nums[i] + nums[j] + nums[low] + nums[high];
                    if (sum > target) {
                        --high;
                    } else if (sum < target) {
                        ++low;
                    } else {
                        res.push_back(
                            {nums[i], nums[j], nums[low], nums[high]});
                        while (low < high && nums[low] == nums[low + 1]) {
                            ++low;
                        }
                        while (low < high && nums[high] == nums[high - 1]) {
                            --high;
                        }
                        ++low;
                        --high;
                    }
                }
            }
        }
        return res;
    }
};
