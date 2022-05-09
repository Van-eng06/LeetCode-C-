class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;                                    
       
        for(int i = 1;i<=rowIndex;i+=1)
        {
            vector<int> vc;                                       
            //Temporary vector to push elements of  for the ith row
            for(int j = 1;j<=i;j++)
            {
                if(j==1 || j==i)                   
                    //Push 1 at  first and last element of every row
                    vc.push_back(1); 
                else
                {
                    vc.push_back(res[i-2][j-2] + res[i-2][j-1]);
                }
            }
            res.push_back(vc);                       
            //Pushing ith row to final vector
        }
        vector<int> ans;
        // now founding out the elements of particular row and inserting in the ans vector
        int i=rowIndex+1;
        for(int j=1;j<i+1;j++)
        {
            if(j==1 || j==i)                   
                    //Push 1 at  first and last element of every row
                    ans.push_back(1); 
                else
                {
                    ans.push_back(res[i-2][j-2] + res[i-2][j-1]);
                }
        }
        return ans;
        
    }
};
