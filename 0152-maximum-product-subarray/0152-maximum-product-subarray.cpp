class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefixsum = 1;
        int suffixsum = 1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                maxi = max(maxi, 0);
                prefixsum = 1;
            } else {
                prefixsum *= nums[i];
                maxi = max(maxi, prefixsum);
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == 0) {
                maxi = max(maxi, 0);
                suffixsum = 1;
            } else {
                suffixsum *= nums[i];
                maxi = max(maxi, suffixsum);
            }
        }

        return maxi;
    }
};
