def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxValue = nums[0]
        current  = 0
        for item in nums:
            if current < 0:
                current  = 0
            
            
            current += item
            
            maxValue = max(current, maxValue)
        return maxValue
