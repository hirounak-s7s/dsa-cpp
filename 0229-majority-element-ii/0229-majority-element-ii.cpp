class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int el1 = 0, el2 = 0;
        int n = nums.size();
        vector<int> ans;
        int mini = (int)(n / 3) + 1;
        for (int i = 0; i < n; i++) {
            if (count1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                count1++;
            } else if (count2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                count2++;
            } else if (el1 == nums[i]) {
                count1++;
            } else if (el2 == nums[i]) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < n; i++) {
            if (el1 == nums[i]) {
                count1++;
            }
            if (el2 == nums[i]) {
                count2++;
            }
        }
        if (count1 >= mini) {
            ans.push_back(el1);
        }
        if (count2 >= mini && el1 != el2) {
            ans.push_back(el2);
        }
        return ans;
    }
};