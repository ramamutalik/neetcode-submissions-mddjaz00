class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]=i;
        }
        int ans=0;
        for(auto a:mp) {
            if(mp.find(a.first-1)==mp.end()) {
                int num=1;
                int find=a.first;
                for(auto b:mp) {
                    if(mp.find(find + 1)!=mp.end()) {
                        num++;
                        find++;
                    }
                }
                ans=max(ans,num);
            }
        }
        return ans;
    }
};
