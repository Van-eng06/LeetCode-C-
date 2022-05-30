class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int r1 = 0, r2 = n-1;
        int c1 = 0, c2 = m-1;
        while(r1 <= r2 && c1 <= c2)
        {
            // left to right (row will be fixed)
            for(int i = c1; i <= c2; i++)
                ans.push_back(matrix[r1][i]);
				
				// move down(col will be fixed)
            for(int i = r1+1; i <= r2; ++i)
                ans.push_back(matrix[i][c2]);
				
            // move right to left
            // move  up
            if(r1 < r2 && c1 < c2)
            {
                // move right to left (row will be fixed)
                for(int i = c2-1; i>c1; --i)
                    ans.push_back(matrix[r2][i]);
					
					// move up (col will be fixed)
					for(int i = r2; i>r1; --i) 
                    ans.push_back(matrix [i][c1]);
            }
            ++r1;
            --r2;
            ++c1;
            --c2;
        }
        return ans;
    }
};   
