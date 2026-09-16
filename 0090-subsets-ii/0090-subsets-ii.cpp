class Solution {
public:
vector<vector<int>>result;
    void sb(vector<int>&nums,int i,vector<int> temp){
        
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        
        sb(nums,i+1,temp);
        temp.pop_back();  
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
              i++;
        }
        sb(nums, i + 1, temp);
    

  
        
        
        

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        
        sb(nums,0,temp);
        return result;
    }
};