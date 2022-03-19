   int maxSubArray(vector<int>& nums) {
 
 int finalVal = nums[0];
        int whole = 0;
        int set = 2;
        bool isStart = false;
        
        int innerSum  = 0;
        bool rev = true;
        
        
        for(auto x : nums){
            if(x > finalVal){
             finalVal = x;
            }
        }
        innerSum = nums[nums.size() - 1];
        
        
        while(set <= nums.size()){

            
           if(!rev){
 
           for(int i = set - 1; i < nums.size(); ++i){
               
               if(i == set - 1){
                   innerSum += nums[i];
   
               }else{
                   isStart = true;
                   innerSum -= nums[i - set];
                   innerSum += nums[i];
               }
               if(innerSum > finalVal){
                   finalVal = innerSum;
               }  
           }
               rev = true; 
           }else{
                          
               for(int i = nums.size() - set; i >= 0; --i){
                   if(i == nums.size() - set){
                       innerSum += nums[i];
                   }else{
                      
                   innerSum -= nums[i + set];
                   innerSum += nums[i];
                   }
                   
                   if(innerSum > finalVal){
                   finalVal = innerSum;
                    }
               }
              rev = false;
           }
            set += 1;

        }
    
         return finalVal;
         }
        
