class Solution {
    func plusOne(_ digits: [Int]) -> [Int] {
        var carry = 1
        var ans = [Int]()
        
        for num in digits.reversed() {
            ans.insert((num + carry) % 10, at: 0)
            
            if num + carry > 9 {
                carry = 1
            } else {
                carry = 0
            }
            
        }
                
        if(carry == 1) {
            ans.insert(1, at: 0)
        }
        
        return ans
    }
}
