class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
	// sort -> target -> 2 point -> pass duplicate -> append
	vector<vector<int>> sol;

	sort(nums.begin(), nums.end()); //sorting

	for(int i=0; i<nums.size(); i++){

		int target = 0 - nums[i]; //target
		int left = i + 1;  
		int right = nums.size() - 1;
        
        //using two pointe

		while(left < right){
			int sum = nums[left] + nums[right];

			if(sum < target){
				left++;
			}
			else if(sum > target){
				right--;
			}
			else{
				vector<int> tmp = {nums[i], nums[left], nums[right]};
				sol.push_back(tmp); //pushing back the set into the final vector

                // to avoid same set of numbers
				while(left < right && nums[left] == tmp[1]) left++;
				while(left > right && nums[right] == tmp[2]) right++;
			}
		}
		while (i < nums.size()-1 && nums[i] == nums[i+1]) i++; //to remove duplicates
	}

	return sol;
}
};
