class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i:nums) {
            mp[i]++;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++) {
            if(it->second > 1) {
                return true;
            }
        }

        return false;
    }
};