 def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        shift = (n + m) - 1
        start1 = m - 1
        start2 = n - 1
        while shift >= 0:
            
            if(start1 < 0 or (start2 >= 0 and nums1[start1] < nums2[start2]) ):
                nums1[shift] = nums2[start2]
                start2 = start2 - 1
            else:
                nums1[shift] = nums1[start1]
                start1 = start1 - 1
        
            
            shift = shift - 1
