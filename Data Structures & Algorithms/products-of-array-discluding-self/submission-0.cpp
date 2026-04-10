class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix;
        int i=0, pro=1;
        while(i<nums.size()){
            prefix.push_back(pro);
            pro*=nums[i];
            i++;
        }
        pro=1;
        i=nums.size()-1;
        while(i>=0){
            suffix.push_back(pro);
            pro*=nums[i];
            i--;
        }

        vector<int> ans;
        for(int i=0, j=suffix.size()-1;i<prefix.size()&&j>=0;i++,j--){
            ans.push_back(prefix[i] * suffix[j]);
        }
        return ans;
    }
};
