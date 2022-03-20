def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 1
        memo = []
        memo.append(1)
        memo.append(2)
        
            
        for x in range(2, n):
            memo.append(memo[x-1] + memo[x-2])
  
        return memo[len(memo) - 1];
