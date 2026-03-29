class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int mid;
        int index = n;
        while(start<=end){
            mid = start +(end-start)/2;
            if(arr[mid]==target){
                index = mid;
                return index;
            }
            else if(arr[mid]<target){
                start = mid+1;

            }
            else{
                index = mid;
                end = mid-1;
            }
        }
        return index;
    }
};