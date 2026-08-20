class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> ans;
        unordered_map<int,int>freq;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                freq[grid[i][j]]++;
            }
        }
        for(auto it = freq.begin();it!=freq.end();it++){
            if(it->second>1){
                ans.push_back(it->first);
            }
        }
        for(int i =1;i<=n*m;i++){
            if(freq[i]==0){
                ans.push_back(i);
               break;
            }
             
        }
        return ans;
    }
};