class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>freq;
        for(int i =0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second>1){
                count = it->first;
            }
        }
        return count;
    }
};