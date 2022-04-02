int titleToNumber(string columnTitle) {
        int startRemander = 0;
        int finalValue = 0;
        for(int i = 0; i < columnTitle.size(); ++i){
            startRemander *= 26;
            if(columnTitle[i] == 'Z'){
                startRemander += 26;
            }else{
                startRemander += static_cast<int>(columnTitle[i] - '@');
                 
            }
              
        }
        return startRemander;
    }
