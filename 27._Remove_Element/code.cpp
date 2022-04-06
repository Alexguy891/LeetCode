class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        
        if(nums.empty() == true)
            return 0;
        
        while(i < nums.size()) {
            if(nums[i] == -1)
                break;
            if(nums[i] == val) {
                nums.erase(nums.begin() + i);
                nums.push_back(-1);
                i--;
            }
            i++;
        }
              
        return i;
    }
};
