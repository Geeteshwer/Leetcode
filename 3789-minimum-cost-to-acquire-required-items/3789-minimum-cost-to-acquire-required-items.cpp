class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long pair = min(need1,need2);
        long long Cost = pair*min(costBoth,cost1+cost2);
        long long a = need1 - pair;
        long long b = need2 - pair;
        long long c = a*min(cost1,costBoth) + b * min(cost2,costBoth);
        return Cost + c;
    }
};