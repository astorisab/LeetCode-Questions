 bool isPalindrome(int x) {
        string convert = std::to_string(x);
        int xBack = convert.length() - 1;
        for (int i = 0; i < convert.length()/2; ++i){
            if(convert[i] != convert[xBack]){
                return false;
            }
            xBack -= 1;
        }
        
        return true; 
    }
