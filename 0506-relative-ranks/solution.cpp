class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> res;
        for(int i = 0;i<n;i++){
            res.push_back({score[i],i});
        }
        sort(res.begin(),res.end(),greater<pair<int,int>>());
        vector<string> ans(n);
        for(int i =0 ; i<n;i++ ){
            if(i == 0)
                ans[res[i].second] = "Gold Medal";
                 else if(i == 1)
                    ans[res[i].second] = "Silver Medal";
                    else if(i==2)
                        ans[res[i].second] = "Bronze Medal";
                        else 
                            ans[res[i].second]= to_string(i+1);
                        
                    
                

            
        }
        return ans;
    }
};
