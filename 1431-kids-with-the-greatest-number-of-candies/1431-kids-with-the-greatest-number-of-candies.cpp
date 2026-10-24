class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candi = *max_element(candies.begin(),candies.end());
        vector <bool> ans(candies.size());
        for(int i =0; i<candies.size();i++){
            if(candies[i]+extraCandies>=max_candi) ans[i] = true;
            else ans[i] = false;
        }
        return ans;
    }
};