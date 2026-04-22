class Solution {
public:
    void solve(int idx,int target,vector<int>&candidates,vector<int>&curr,vector<vector<int>>&result){
        if(target<0)
        return;
        if(target==0){
            result.push_back(curr);
            return;
        }
        for(int i =idx;i<candidates.size();i++){
            if(i>idx&&candidates[i]==candidates[i-1]){
                continue;
            }
            curr.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,curr,result);
            curr.pop_back();
        }
    } 



    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> result;
        sort(candidates.begin(),candidates.end());
        solve(0,target,candidates,curr,result);
        return result;


        
    }
};
