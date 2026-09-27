class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        if(k>n){
            return 0;
        }
        for(int i =0;i<k;i++){
            sum +=arr[i];
        }
        if(sum>=k*threshold){
            count++;
        }
        for(int right =k;right<n;right++){
            sum += arr[right]-arr[right-k];
             if(sum>=k*threshold){
            count++;
        }
        }
        
        return count;
    }
};