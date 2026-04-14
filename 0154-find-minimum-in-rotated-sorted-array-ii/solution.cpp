class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mn = nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i]<mn){
                mn = nums[i];
            }
        }
        return mn;
        
    }
};
