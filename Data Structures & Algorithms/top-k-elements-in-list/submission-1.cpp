class Solution {
public:
    struct comp {
        bool operator() (pair<int,int> a, pair<int,int> b){
            return a.second < b.second;

        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, comp> q;
        map<int,int> temp;
        for(auto a:nums){
            // if(q.find(a)!=q.end()){
            //     a.second++;
            //     continue;
            // }
            // q.insert(make_pair(a, 1));
            temp[a]++;
        }
        for(auto a:temp){
            q.push(make_pair(a.first, a.second));
        }
        vector<int> ans;
        for(int i=1;i<=k;i++){
            ans.push_back(q.top().first);
            q.pop();
        }
        return ans;
    }
};
