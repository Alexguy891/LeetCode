class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        
        if(target < nums[0])
            return 0;
        
        if(target > nums[nums.size()-1])
            return nums.size();
            
        while(i < nums.size()) {
            if(target == nums[i])
                return i;
            if(target > nums[i] && target < nums[i+1] && i < nums.size()-1)
                return i+1;
            i++;
        }
        return i;
    }
};
