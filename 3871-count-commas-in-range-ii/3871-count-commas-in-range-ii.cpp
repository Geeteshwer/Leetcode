class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long comma = 0;
        long long a = 1000;
        while(a<=n){
            comma+=n-a+1;
            a = a*1000;
        }
        return comma;
    }
};