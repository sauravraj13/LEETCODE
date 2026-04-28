class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

      
        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += cardPoints[i];
        }

        
        if(k == n) return totalSum;

        
        int windowSize = n - k;

        int currSum = 0;
        for(int i = 0; i < windowSize; i++) {
            currSum += cardPoints[i];
        }

        int minSum = currSum;

       
        for(int i = windowSize; i < n; i++) {
            currSum += cardPoints[i];                 
            currSum -= cardPoints[i - windowSize];    

            if(currSum < minSum) {
                minSum = currSum;
            }
        }

        // Step 4: result
        return totalSum - minSum;
    }
};
