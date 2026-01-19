class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int n;
        int temp=x;
        if(x<0) return 0;
        while(x){
            n = x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev = rev*10+n;
            x/=10;
        }
        if(rev==temp) return 1;
        else return 0;
    }
};