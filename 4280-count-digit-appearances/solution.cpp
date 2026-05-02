class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;

        for(int num : nums){

            // Special case: number is 0
            if(num == 0 && digit == 0){
                count++;
            }

            while(num > 0){
                if(num % 10 == digit){
                    count++;
                }
                num /= 10;
            }
        }

        return count;
    }
};
