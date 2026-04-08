class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target - nums[i]) == mp.end()){
                mp[nums[i]] = i;
                continue;
            }
            if(i>mp[target - nums[i]])
                return {mp[target - nums[i]], i};
            return {i, mp[target - nums[i]]};
        }
        return {-1,-1};
    }
};
