class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr = nums1;
        for(auto i : nums2){
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n%2){
            return arr[n/2];
        }
        return (arr[n/2]+arr[n/2-1])/2.00;
    }
};