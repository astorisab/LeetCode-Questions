def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        
        shortestS = len(strs[0]);
        stringComp = strs[0]
        final = strs[0]
        
        for item in strs:
            if len(item) < shortestS:
                shortestS = len(item)
                stringComp = item;
                final = item;
        for item in strs:
            comp = 0
            sub = ""
            for char in stringComp:
                
                if char != item[comp]:
                    if len(sub) < len(final):
                        final = sub
                    break
                else:
                    sub += char
                comp  = comp + 1                  
        return final
