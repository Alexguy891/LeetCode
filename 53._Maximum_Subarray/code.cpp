class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int maxNum = nums[0];
        
        for(int i = 0; i < nums.size(); i++) {
            current = max(nums[i] + current, nums[i]);
            maxNum = max(maxNum, current);
        }
        return maxNum;
    }
};
