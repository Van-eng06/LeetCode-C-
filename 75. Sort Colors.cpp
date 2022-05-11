#three pointers

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int i=0;
        int k=n-1;
        
        while(i<=k)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
                
            }
            else if(nums[i]==1)
            {
                i++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[k]);
                k--;
                
            }
        }
        
    }
};
