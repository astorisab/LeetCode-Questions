vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; --i){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else if(digits[i] == 9){digits[i] = 0;}
        }
        
        if(digits[0] == 0){
            digits[0] = 1;
            for(int i = 1; i < digits.size(); ++i){
                digits[i] = 0; 
            }
            digits.push_back(0);
        }
        return digits;
}
