class Solution {
public:
    int minElement(vector<int>& nums) {
        vector <int> a;
        for(int i = 0;i<nums.size();i++){
            int n = nums[i];
            int ans = 0;
            while(n>0){
                ans+=n%10;
                n/=10;
            }
                a.push_back(ans);
        }
        int output = *min_element(a.begin(),a.end());
        return output;
    }
};