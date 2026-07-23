class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double ans = 0;
        int n = nums.size();
        for(int i = 0;i<k;i++){
            sum += nums[i];
        }
         double maxSum = sum;
        int st = 0;
        int ed = k;
        while(k<n&&st<n-k){
            sum -= nums[st];
            st++;
            sum += nums[ed];
            ed++;
          maxSum = max(maxSum,sum);
        }
        ans = maxSum/k;
        return ans;

    }
};