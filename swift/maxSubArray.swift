func maxSubArray(_ nums: [Int]) -> Int {
        
        var finalSum:Int = nums[0]
        var currentSum:Int = 0
        for item in nums {
            
            if currentSum <= 0 {
                currentSum = 0
            }
            currentSum = currentSum + item
            
            if currentSum > finalSum {
                finalSum = currentSum
            }
        }
        
        return finalSum
    }
