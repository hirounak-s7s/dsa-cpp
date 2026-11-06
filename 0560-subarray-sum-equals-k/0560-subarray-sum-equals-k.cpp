class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map <int, int> mpp;
        int PrefixSum = 0;
        int count = 0;
        int n = nums.size();
        mpp[0] = 1;
        for(int i = 0; i<n; i++){
            PrefixSum += nums[i];
            int Remove = PrefixSum - k;
            count += mpp[Remove];
            mpp[PrefixSum] += 1;
        }
        return count;
    }
};