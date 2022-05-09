class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid[0].size(),n=grid.size();    //m=size of coloumn , n=size of rows
        int count=0;                           // initializing a counter 
        
        for(int i=0;i<n;i++)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(grid[i][j]<0){count++;}  
                //if we find a negative element then increment the count
                else
                {break;}  //else shift the pointer to another row by breaking the nested loop
            }
        }
            
        return count;
    }
};
