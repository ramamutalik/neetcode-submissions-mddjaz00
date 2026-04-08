class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string a=strs[i];
            sort(a.begin(), a.end());
            if(mp.find(a) != mp.end()){
                mp[a].push_back(strs[i]);
                continue;
            }
            vector<string> temp = {strs[i]};
            mp[a] = temp;
        }
        vector<vector<string>> ans;
        for(auto a:mp){
            ans.push_back(a.second);
        }
        return ans;
    }
};
