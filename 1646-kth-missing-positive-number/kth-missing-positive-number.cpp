class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int prev=0;
        // for(int i =0;i<arr.size();i++){
        //     while(prev+1!=arr[i]){
        //         prev++;
        //         k--;
        //          if(k==0) return prev;
        //     }
        //     prev = arr[i];
           
        // }
        // return prev+k;
        int start =0,end = arr.size()-1,ans=arr.size();
        int mid;
        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid]-mid-1>=k){
                ans = mid;
                end = mid-1;
               
            }
            else  start= mid+1;
        }
        return ans+k;
    }
};
