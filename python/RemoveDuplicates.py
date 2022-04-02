def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        remove = []
        current = 0
        for i in range(1, len(nums)):  
            if nums[current] == nums[i]:
                  remove.append(i)
            current += 1
    
        dec = 0
        for i in range(1, len(nums)):
            if dec < len(remove) and i == remove[dec]:
                dec += 1;
            if i-dec > len(nums) - len(remove):
                break;
            
            nums[i - dec] = nums[i];
           
 
        return len(nums) - len(remove)
