class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = *min_element(nums1.begin(),nums1.end());
        int ans = 0;
        for(int i = 0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                ans++;
            }
        }
        if(mn%2!=0 || ans==0){
            return true;
        }
        return false;
    }
};