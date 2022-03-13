def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        convert = str(x)
        xBack = len(convert) - 1
        for item in range(0, len(convert)/2):
            if convert[item] != convert[xBack]:
                return False;
            xBack -= 1;
            
            
        return True; 
