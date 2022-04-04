bool isHappy(int n) {
        
        bool isLess = 0;
        while(true){
            if(n <= 100){
                if( n == 1 || n == 10 || n == 100){
                    return true;
                }
                isLess = 1;
            }else if(isLess && n != 130){
                return false;
            }
            int holder = n;
            n = 0;
            
            while(holder > 0){
                int mod = holder % 10;
                n += mod*mod;

                holder = holder/10;
                
            }            
        }
        return false;
    }
