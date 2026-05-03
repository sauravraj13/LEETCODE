class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        
        int maxi = 0;
        for(auto &p : mp) maxi = max(maxi, p.second);
        
        int ans = 0;
        for(auto &p : mp){
            if(p.second == maxi) ans += p.second;
        }
        return ans;
    }
};
