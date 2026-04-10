class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto a:strs) {
            int len=a.length();
            ans+=to_string(len)+"#"+a;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.length()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            i = pos + 1;
            ans.push_back(s.substr(i, len));
            i += len;
        }
        return ans;
    }
};
