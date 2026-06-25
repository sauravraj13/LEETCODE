class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        auto pi = ans.begin();
        auto ni = ans.begin()+1; // new vector me even index ko first pe odd ko second pe fir +2 karte jao
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                *pi = nums[i];
                pi += 2;
            }else{
                if(nums[i]<0){
                    *ni = nums[i];
                    ni += 2;
                }
            }
        }
        return ans;
    }
};
