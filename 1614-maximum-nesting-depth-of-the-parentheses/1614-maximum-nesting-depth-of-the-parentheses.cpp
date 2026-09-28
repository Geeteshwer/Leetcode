class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int mx = 0;
        for(auto i: s){
            if(i == '('){
                count++;
                mx = max(count,mx);
            }
            else if(i == ')') count--;
        }
        return mx;
    }
};