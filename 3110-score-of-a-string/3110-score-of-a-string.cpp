class Solution {
public:
    int scoreOfString(string s) {
        int n = 0;
        for(size_t i =0; i<s.length()-1;i++ ){
            n+=abs(s[i]-s[i+1]);
        }
        return n;
    }
};