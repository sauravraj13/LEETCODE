class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>fre;
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            fre[nums[i]]++;
        }
        for(auto it=fre.begin();it!=fre.end();it++){
            if(it->second==1){
                ans= it->first;
            }
        }
        return ans;
    }
};