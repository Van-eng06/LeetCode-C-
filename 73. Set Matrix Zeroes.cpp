class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++){ //i=1
            for( int j=0;j<cols;j++){ //j=1
                if(matrix[i][j]==0){  //true
                    //making the same row elements 0
                    for(int k=0;k<cols;k++) 
                    {
                        if(matrix[i][k]!=0) //1,0 //1,1 //1,2
                            matrix[i][k]=INT_MIN+1;
                    }
                    //make col elements 0
                    for(int l=0;l<rows;l++)  
                    {
                        if(matrix[l][j]!=0) //0,1 //1,1 // 2,1
                            matrix[l][j]=INT_MIN+1;
                    }
                        
                }
            } 
        } // not changing directly to 0 to avoid changes to occur in loop
        for(int i=0;i<rows;i++){
            for( int j=0;j<cols;j++){
                if(matrix[i][j]==INT_MIN+1)
                    matrix[i][j]=0;
            } 
        }
    }
}; 
    
