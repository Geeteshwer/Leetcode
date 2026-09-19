class Solution {
public:
    int reverse(int x) {
        int a = 0;
        while(x!=0){
            if((a>INT_MAX/10) || (a<INT_MIN/10)) return 0;
            a = a*10 + x%10;
            x/=10;
        }
        return a;
    }
};