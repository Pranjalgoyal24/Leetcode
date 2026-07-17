class Solution {
public:
    bool checkIfPangram(string s) {
       // return set<char>(s.begin(),s.end()).size()==26;
if (s.size() < 26) return false;
        vector<int>arr(26,0);
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']=1;
        }
        for(auto it:arr){
            if(it==0) return false;
        }
        return true;

    }
};