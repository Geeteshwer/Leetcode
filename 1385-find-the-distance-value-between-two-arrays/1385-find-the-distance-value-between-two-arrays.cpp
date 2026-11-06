class Solution {
public:
bool isvalid(int n , vector <int>&arr,int d){
    for(int i : arr){
        if(abs(i-n)<=d) return false;
    }
    return true;
}
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for(int i : arr1){
            if(isvalid(i,arr2,d)) ans++;
        }
        return ans;
    }
};