class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m = s.size();
        int count =0;
        int start = 0;
        int start2 = 0;
        while(start2<m&&start<n){
            if(g[start]>s[start2]){
                start2++;
            }else{
               
                    count++;
                    start++;
                    start2++;
            }
            }
                
            
    
        return count;
    }
};