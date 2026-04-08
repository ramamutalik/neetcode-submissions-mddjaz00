class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++) {
            mp[t[i]]--;
        }
        auto itr=mp.begin();
        while(itr!=mp.end()){
            if(itr->second != 0 ){
                return false;
            }
            itr++;
        }
        return true;
    }
};
