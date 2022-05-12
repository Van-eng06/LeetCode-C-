class Solution {
private:
    void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> t){
        if(t.size()==nums.size()){
            ans.push_back(t);
            return ;
        }
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=11){
			// The difference between the upper code and this code
			
            if(j>0 && nums[j]==nums[j-1]) continue;       // skip the element which has already been included
            int i=nums[j];
            nums[j]=11;
            t.push_back(i);
            solve(nums,ans,t);
            t.pop_back();
            nums[j]=i;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());          // sort the givern nums vector to check the consecutive elements
        vector<vector<int>> ans;
        solve(nums,ans,{});
        return ans;
    }
};
