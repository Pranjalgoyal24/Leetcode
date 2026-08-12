class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int curr_sum=arr[i]+arr[j];
            if(curr_sum==target){
                return {i+1,j+1};
            }
            else if(curr_sum>target){
                j--;
            }
            else i++;
        }
        return{};
    }
};