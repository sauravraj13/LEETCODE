class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int i = 0; i < nums1.size(); i++) {
            int foundIndex = -1;

            // Step 1: find element in nums2
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    foundIndex = j;
                    break;
                }
            }

            int nextGreater = -1;

            // Step 2: search to the right
            for(int j = foundIndex + 1; j < nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
                    nextGreater = nums2[j];
                    break;
                }
            }

            result.push_back(nextGreater);
        }

        return result;
    }
};
