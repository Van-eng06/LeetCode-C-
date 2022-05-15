class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> mp; // map to store whether there is a next integer greater than or not 
        stack<int> s; //monotonic stack for comparison
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() and nums2[i]>=s.top())
                s.pop();
            if(s.empty())
                mp[nums2[i]] = -1; // if there is no greater element than storing -1
            else
                mp[nums2[i]] = s.top(); //storing next greater element if the condition is satisfied
            s.push(nums2[i]);
        }
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
            v.push_back(mp[nums1[i]]); //storing the final answer vector of next greater elements with the help of values stored in map
        return v;
    }
};
