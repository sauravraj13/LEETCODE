class Solution {
public:
    void Findpermute(int idx, vector<int> &nums, vector<vector<int>> &result) {
        if (idx == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);              
            Findpermute(idx + 1, nums, result);   
            swap(nums[idx], nums[i]);   // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        Findpermute(0, nums, result);
        return result;
    }
};
