class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int maxi = 0;
        int ind = 0;
        for(int i = 0;i<n;i++){
            
            if(arr[i]>maxi){
                maxi = arr[i];
                ind = i;
            }
        
        }
        return ind;
    }
};