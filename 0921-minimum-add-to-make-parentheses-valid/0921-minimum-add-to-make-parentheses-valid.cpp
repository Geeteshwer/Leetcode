class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int close = 0;
        for(char i : s){
            if(i=='(') open++;
            else if(open==0) close++;
            else open--; 
        }
        return open+close;
    }
};