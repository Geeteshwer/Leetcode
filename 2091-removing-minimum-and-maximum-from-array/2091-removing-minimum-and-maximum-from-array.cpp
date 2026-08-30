class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int n = nums.size();
       int mn = min_element(nums.begin(),nums.end())-nums.begin(); 
       int mx = max_element(nums.begin(),nums.end())-nums.begin(); 
       int left = min(mn,mx);
       int right = max(mn,mx);
       int option1 = right+1;
       int option2 = n - left;
       int option3 = (left+1)+(n-right);;
       return min({option1,option2,option3});

    }
};