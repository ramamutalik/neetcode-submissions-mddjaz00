class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto a:nums){
            if(mpp.find(a) != mpp.end()){
                return true;
            }
            mpp[a]++;
        }
        return false;
    }
};