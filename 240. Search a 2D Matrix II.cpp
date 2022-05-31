class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int c = col-1;
        int r =0;
        while((r < row && r >=0)  && (c < col && c >= 0)){
            
            int element = matrix[r][c];
            
            if(element == target){
                return true;
            }
             else if(element > target){
                  c--;
            }else{
                 r++;
             }
        }
        return false;
        
    }
};
