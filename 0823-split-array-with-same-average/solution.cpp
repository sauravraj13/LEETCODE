class Solution {
public:
    bool splitArraySameAverage(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);

        vector<unordered_set<int>> dp(n + 1);
        dp[0].insert(0);

        for (int num : nums) {
            for (int k = n / 2; k >= 1; --k) {
                for (int s : dp[k - 1]) {
                    dp[k].insert(s + num);
                }
            }
        }

        for (int k = 1; k <= n / 2; ++k) {
            if ((sum * k) % n == 0) {
                int target = (sum * k) / n;
                if (dp[k].count(target))
                    return true;
            }
        }

        return false;
    }
};
