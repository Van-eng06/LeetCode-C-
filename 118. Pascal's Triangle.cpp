class Solution {
public:
    vector<vector<int>> generate(int num) {
        
        vector<vector<int>> res;                                     
        //To store final result
       
        for(int i = 1;i<=num;i+=1)
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
        return res;
    }
};
