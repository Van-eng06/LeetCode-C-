class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
        int n = tem.size();
		// init an ans vector of size n and assigning all to 0 
        vector<int> ans(n, 0);
		// taking a stack of pair<int,int> i.e one for the value and other for its index in tem
        stack<pair<int,int>> st;
        for(int i = 0; i < n; i++){
		//  if stack is not empty and the outside element is > than the element at top of the
		// stack then 
            while(!st.empty() and tem[i] > st.top().first){
			// assign the difference of their indices to the top element's ans position
                ans[st.top().second] = i - st.top().second;
                st.pop();
				// then just pop it baby
     
            }
            st.push({tem[i],i});
        }   
        return ans;
    }
};
