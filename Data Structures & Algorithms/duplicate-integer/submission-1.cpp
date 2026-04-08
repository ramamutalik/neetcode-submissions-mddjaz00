class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int element=0;
        for (int i=0;i<nums.size();i++) {
            if(i == 0){
                element=nums[i];
                continue;
            }
            if(element == nums[i]){
                return true;
            }
            element = nums[i];
        }
        return false;
    }
};