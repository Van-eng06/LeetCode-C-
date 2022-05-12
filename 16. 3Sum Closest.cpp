class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      //first sorting the given vector
        sort(nums.begin(),nums.end()); 
        int Lmin=-2000,Hmin=2000;
      
    for(int i=0;i<nums.size()-2;i++)
    {
        int j=i+1;
        int k=nums.size()-1;
      //taking two pointers to compare the vector values
        while(j<k){
            int sum=nums[i]+nums[j]+ nums[k];
            if (sum==target){
                // Lmin=Hmin=target; 
              // if we found a sum which is exact equal to target then we'll return it straight
                return target;
              
            }
            else if( sum<target){
            if(sum>Lmin)
                Lmin=sum;
                j++;
            }
            else{
                if(sum<Hmin)
                    Hmin=sum;
                k--;
            }
            
            
            
        }
        
        
    }
      //comparing which value is closer to the target
        if (target-Lmin<Hmin-target)
            return Lmin;
        else
            return Hmin;
        
    }
};
