class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxx = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]==1){
                count++;
                maxx= max(count,maxx);
            }
            else{
                count = 0;
            }
        }
        return maxx;
    }
};