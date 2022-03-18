int lengthOfLastWord(string s) {
        bool isA = false;
        int count = 0;
        
        for(int i = s.size() - 1; i >= 0; --i){

            if((toupper(s[i]) < 65 || toupper(s[i]) > 90) && isA){
              
                return count;
            }else if(isA){
                
              count += 1;  
            }
            
            if(toupper(s[i]) >= 65 &&  toupper(s[i]) <= 90 && !isA){
                isA = true;
                count += 1;
                cout << s[i];
            }
        }
        return count;
