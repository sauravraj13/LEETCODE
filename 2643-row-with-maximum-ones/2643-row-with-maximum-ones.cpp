class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       
        int c = mat.size();
        int row = 0;
        int maxcount =0;
        for(int i = 0;i<c;i++){
            int count =0;
            for(int j = 0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                count ++;
                }
             }
              if(count>maxcount){
                maxcount = count;
                row = i;
            }
           
        
        }
              return {row,maxcount};
                
            
           
        
    }
};