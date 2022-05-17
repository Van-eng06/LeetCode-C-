class Solution {
public:

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    
    int i,n=nums.size();
    vector<int> s,ans;
    s=nums;                     // copy vector
    sort(s.begin(),s.end());     
    
    for(i=0;i<n;i++)
    {
        vector<int>::iterator it;
        it=find(s.begin(),s.end(),nums[i]);       // find postion of element in sorted vector (starting inex 0)
        int pos = it - s.begin();
        ans.push_back(pos);
    }
    
    return ans;
}
};
