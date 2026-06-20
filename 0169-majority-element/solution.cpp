class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int>mp;
    int maxfreq=0;
    int ans = 0;
int freq=0;
    for(int i=0;i<nums.size();i++)
    {
           mp[nums[i]]++;
            if(mp[nums[i]]>maxfreq){
                maxfreq=mp[nums[i]];
                ans = nums[i];
            }
    
    }
    return ans;

    }
};
