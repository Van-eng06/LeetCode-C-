class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--){
            st.push(i);
        }
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[i] >= nums[st.top()])
                st.pop();
            if(st.empty())
                res.push_back(-1);
            else
                res.push_back(nums[st.top()]);
            st.push(i);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
