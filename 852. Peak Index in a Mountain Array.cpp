#simple solution - brute force - O(n)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int in=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]<=arr[i] && arr[i]>arr[i+1])
            {
                in=i;
                break;
            }
        }
        return in;
    }
};

|||||||||||||||||||||||||||||||||||||||||||||||
  
#binary search - optimised solution - O(logn)
  
 class Solution {
public:
    int binarySearch(vector<int> &v,int start,int end){
        static int ans = -1;
        if(start>end) return ans;
        int mid=start+(end-start)/2;
        if(v[mid]<v[mid+1]) return binarySearch(v,mid+1,end);
        if(v[mid]>v[mid-1] && v[mid]>v[mid+1]) return mid;
        return binarySearch(v,start,mid-1);
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return binarySearch(arr,0,arr.size()-1);
    }
};
