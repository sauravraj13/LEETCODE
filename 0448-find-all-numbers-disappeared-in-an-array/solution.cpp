class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i =1;i<=n;i++)
        {
            if(s.contains(i))
            continue;
            else result.push_back(i);
        }
        return result;
    }
};
