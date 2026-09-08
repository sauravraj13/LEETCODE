class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int count = 0;
        vector<int>arr;
        arr.push_back(1);
        int start =0;
       
        while(start<=n-2){
            if(ratings[start]<ratings[start+1]){
                arr.push_back(arr[start]+1);
            }else{
                arr.push_back(1);
            }
            start++;
            

        }
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                arr[i] = max(arr[i], arr[i + 1] + 1);
            }
        }
       
        for(int i =0;i<arr.size();i++){
            count += arr[i];
        }
        return count;
    }
};