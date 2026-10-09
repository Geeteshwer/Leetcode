
class Solution {
public:
    bool checkValidString(string s) {
        int min = 0, maxx = 0;
        for (char i : s){
            if (i == '(') {
                min++;
                maxx++;}
            else if (i == ')') {
                min--;
                maxx--;}
            else {
                min--;
                maxx++;}
            if (maxx < 0) return false;
            min = max(min, 0);
        }
        return min == 0;
    }
};