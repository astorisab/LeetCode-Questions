string convertToTitle(int columnNumber) {
        string value = "";
        while(columnNumber > 0){
            if(columnNumber % 26 == 0){
                columnNumber -= 26;
                value += 'Z';
            }else{
                value += '@' + columnNumber % 26;
            }
            columnNumber = columnNumber/26;
            
        } 
        for(int i = 0; i < value.size()/2; ++i){
           std::swap(value[i], value[value.size() - 1 - i]);
    
        }
        return value;
    }
