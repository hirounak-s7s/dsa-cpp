class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum = n*(n+1)/2;
        long long actual_sum = 0;
        for(int num: nums){
            actual_sum += num;
        }
        return sum - actual_sum;
    }
};