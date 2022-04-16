class Solution {
    func maxSubArray(_ nums: [Int]) -> Int {
        var maxNum: Int = nums[0]
        var current: Int = 0
        
        for i in nums {
            current = max(i + current, i)
            maxNum = max(maxNum, current)
        }
        return maxNum
    }
}
