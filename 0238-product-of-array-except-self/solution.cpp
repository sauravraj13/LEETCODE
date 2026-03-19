class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,1);
       vector<int>suffix(n,1);
        vector<int>result(n);     
        
        for(int m=1;m<n;m++){
            prefix[m] = prefix[m-1]*nums[m-1];            
        }for(int j = n-2;j>=0;j--){
            suffix[j] = suffix[j+1]*nums[j+1];
        }for(int i =0;i<n;i++){
        result[i] = suffix[i]*prefix[i];
        }
        return result;
 
    }
};
     

