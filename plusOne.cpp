vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; --i){
            if(digits[i] < 9){
               
              
                for(int j = i; j < digits.size(); ++j){
                      bool isNine = false;
                      if(!isNine && digits[j] == 9){digits[j] = 0; isNine = true;}
                      else if(isNine){digits[j] = 0;}
                      else{digits[j]++;}
                }
                return digits;
            }
        }
        
        if(digits[0] == 9){
            digits[0] = 1;
            for(int i = 1; i < digits.size(); ++i){
                digits[i] = 0; 
            }
            digits.push_back(0);
        }
        return digits;
        
        
        
        

    }
