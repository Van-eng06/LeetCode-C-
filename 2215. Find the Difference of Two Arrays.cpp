
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            vector<vector<int>>ans;  //2d vector
            vector<int>result,result2; 
           map<int,int>memo;  
             map<int,int>memo2;
            
            for(int i=0;i<nums1.size();i++)
            {
                    memo[nums1[i]]++;  //  counting frequency
            }
            for(int i=0;i<nums2.size();i++)
            {
                    memo2[nums2[i]]++;  //  counting frequency
            }
           for(auto x:memo)
           {
                   if(memo2.find(x.first)==memo2.end()) //searching in memo2 , element from memo
                   {
                           result.push_back(x.first);
                   }
           }
             for(auto x:memo2)
           {
                   if(memo.find(x.first)==memo.end())  //searching in memo , element from memo2
                   {
                           result2.push_back(x.first);
                   }
           }
            ans.push_back(result);
            ans.push_back(result2);
            return ans;
            
            
            
    }
};
