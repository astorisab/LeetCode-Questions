func singleNumber(_ nums: [Int]) -> Int {
        var values = [Int:Int]()
        
        for i in 0...nums.count-1 {
           if(values.index(forKey: nums[i]) == nil){
               values[nums[i]] = 0
           }else{
               values.removeValue(forKey: nums[i])
           } 
        }
        for item in values{
            return item.key
        }
        return -1
 }
