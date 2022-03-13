func twoSum(_ nums: [Int], _ target: Int) -> [Int] {

    var range:Int = 0
    var dict:[Int:Int] = [:]
    
    for item in nums{
    let comp = target - item
        
        
        
    if dict[comp] != nil {
        let random:Int = dict[comp]!
        return [random, range]
    }else{
        dict[item] = range
    }
        
        
    range += 1
    }
    return [-1]
