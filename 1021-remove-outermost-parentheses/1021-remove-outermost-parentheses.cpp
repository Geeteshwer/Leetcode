class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int open = 0;
        for (auto i : s) {
            if (i == '(') {
                if (open > 0)
                    ans += i;
                open++;
            }
            if (i == ')') {
                open--;
                if (open > 0)
                    ans += i;
            }
        }
        return ans;
    }
};