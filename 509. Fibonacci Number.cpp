class Solution {
public:
    int fib(int n) {
        vector<int> res;
        res.push_back(0);
        res.push_back(1);
        for(int i=2;i<=n;i++)
            res.push_back(res.at(i-1)+res.at(i-2)); // to calculate the preceding fibonacci numbers
        return res.at(n); // returning the required number
    }
};
