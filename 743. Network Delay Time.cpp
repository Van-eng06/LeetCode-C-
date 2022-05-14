class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> cost(n+1, INT_MAX);
        cost[0] = 0;
        
        queue<int> q;
        q.push(k);
        
		//since the cost to k was 0
        cost[k] = 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0; i<sz; i++)
            {
                int front = q.front();
                q.pop();
                
				//check for all the edges that originate from front
				
                for(int j=0; j<times.size(); j++)
                {
					// we got such an edge
					
                    if(front == times[j][0])
                    {
						//totalCost to reach our edge will be cost to reach front + edge cost
						
                        int totalCost = cost[front] + times[j][2];
                        
						//if this newCost is less than the previous one then we update the cost  and
						//push that element to the queue since it can generate paths that will result 
						//in minimum cost if its possible
						
                        if(cost[times[j][1]] > totalCost)
                        {
                            cost[times[j][1]] = totalCost;
                            q.push(times[j][1]);
                        }
                        
                    }
                }
            }
        }
        
        int mx = *max_element(cost.begin(), cost.end());
        
        return mx == INT_MAX ? -1 : mx;
    }
};
