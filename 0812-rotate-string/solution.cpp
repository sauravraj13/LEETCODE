class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.length();
        int n = s.length();
        for(int count  = 0;count<=n;count++){
            rotate(s.begin(),begin(s)+1,s.end());
            if(s==goal)
                return true;
            

        }
        return false;
    }
};


