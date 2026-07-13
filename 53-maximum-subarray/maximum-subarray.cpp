class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefix=0,maxi=INT_MIN;
        int n = nums.size();
        for(int i =0;i<n;i++){
            prefix += nums[i];
            maxi = max(maxi,prefix);
            if(prefix<0){
                prefix =0;
            }
        }
        return maxi;
    }
};