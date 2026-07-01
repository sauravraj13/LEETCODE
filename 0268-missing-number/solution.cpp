class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int es = 0;
        int ans = 0;
        int as  = n*(n+1)/2;
        for(int i = 0;i<n;i++){
            es += nums[i];
        }
        ans = as-es;
    return ans;
    }
    
};
