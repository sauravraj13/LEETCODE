class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     int n = people.size();
     sort(people.begin(),people.end());
     int count = 0;
     int left = 0;
     int right = n-1;
     while(left<=right){
        if(people[left]+people[right]<=limit){
            left++;
            
        }
        right--;
        count++;
     }   
     return count;
    }
};