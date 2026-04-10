class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int result = 0;
        int n = s.length();
        for(int i =0;i<n;i++){
            if(s[i]=='('){ count++;}
            else if(s[i]==')'){
                count--;}
            
            result=max(result,count);   
            
       
    }
         return result;
         
    }
};
