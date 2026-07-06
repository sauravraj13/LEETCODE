class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int,int> freq;
        for(int i = 0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<pair<int, int> > v;

        for (unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
            v.push_back(make_pair(it->second, it->first));
        }

        sort(v.begin(), v.end(), greater<pair<int, int> >());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
