class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        int last = 0;
        int count = 0;
        for (int i = 0; i < 2 * n; i++) {
            int left = i / 2;
            int right = left + i % 2;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 >= k) {
                    int end = right + 1;
                    if (left >= last){
                        last = end;
                        count++;}
                    else{
                        last = min(last, end);}
                    break;
                }
                left--, right++;
            }
        }
        return count;
    }
};