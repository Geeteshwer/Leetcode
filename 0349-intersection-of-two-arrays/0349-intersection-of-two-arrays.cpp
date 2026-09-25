class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans(nums1.begin(), nums1.end());
        vector<int> v;
        for (auto a : nums2)
            if (ans.count(a)) {
                v.push_back(a);
                ans.erase(a);
            }
        return v;
    }
};