class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int> ans;
        
        
        int n = nums.size();
        
        
        for(int j =0;j<n;j++){
            ans.push(nums[j]);
        }
        for(int p = 0;p<k-1;p++){
            ans.pop();
        }
        return ans.top();
    }
};
