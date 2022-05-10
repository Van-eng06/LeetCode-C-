class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end()); //sorting the intervals to make comparison easy
	
    vector<vector<int>>ans; // to store the final answer vector
	
    ans.push_back(intervals[0]); //pushing back the initial interval to compare further
	
    int j=0;
    for(int i=1;i<intervals.size();i++){
		
        if(intervals[i][0]<=ans[j][1]){ //comparing the first value of one interval to second value of another interval to check the overlap
            ans[j][1]=max(ans[j][1],intervals[i][1]);
        }
		
        else{
            j++;
            ans.push_back(intervals[i]); //if the interval doesn't overlap we simply push it into ans vector to check further
        }
    }
    return ans;
}
};
