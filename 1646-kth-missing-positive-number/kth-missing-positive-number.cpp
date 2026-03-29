class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int prev=0;
        for(int i =0;i<arr.size();i++){
            while(prev+1!=arr[i]){
                prev++;
                k--;
                 if(k==0) return prev;
            }
            prev = arr[i];
           
        }
        return prev+k;
    }
};
