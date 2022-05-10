#Reminder-divident method

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        if(n==1) return true;
        else
            return false;
    }
};

#Time Complexity: O(logn)
#Space Complexity: O(1)




#Reminder-divident method via Recursion

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};

#Time Complexity : O(logn)
#Space Complexity : O(logn) [Rcursive stack is counted]
