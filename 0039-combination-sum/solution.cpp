class Solution {
    public:
    void findCombination(int ind,int target,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
        
        findCombination(ind,target-arr[ind],ans,ds,arr);
        ds.pop_back();
        }
        findCombination(ind+1,target,ans,ds,arr);
    }
public:

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,ans,ds,candidates);
        return ans;
    }
};
