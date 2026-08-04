class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char,int> have;
        unordered_map<char,int> need;

        // Count letters available in text
        for(char c : text){
            have[c]++;
        }

        // Count letters needed for "balloon"
        string s = "balloon";
        for(char c : s){
            need[c]++;
        }

        int res = INT_MAX;

        for(auto i : need){
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            res = min(res, fhave / fneed);
        }

        return res;
    }
};