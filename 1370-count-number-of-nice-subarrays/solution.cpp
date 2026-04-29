class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int i = 0, count = 0, odd = 0;

        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] % 2 == 1) odd++;

            while(odd > k) {
                if(nums[i] % 2 == 1) odd--;
                i++;
            }

            count += (j - i + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
