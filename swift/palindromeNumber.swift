func isPalindrome(_ x: Int) -> Bool {
   
        
   var newval = String(x)    
   var offset:Int = 0
   if newval.isEmpty{
       return true
   }     
        
        
       while newval.index(newval.startIndex, offsetBy: offset) < newval.index(newval.endIndex, offsetBy: ((offset + 1) * -1)){

          if newval[newval.index(newval.startIndex, offsetBy: offset)] !=
             newval[newval.index(newval.endIndex, offsetBy: (offset + 1) * -1)]{
              return false
             }

          offset += 1
        }
        
   return true
}
