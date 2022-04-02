int lengthOfLastWord(string s) {
        bool isA = false;
        int count = 0;
        
        for(int i = s.size() - 1; i >= 0; --i){

            if(isA && (toupper(s[i]) < 65 || toupper(s[i]) > 90) ){
              
                return count;
            }else if(isA){
                
              count += 1;  
            }
            
            if(!isA && toupper(s[i]) >= 65 &&  toupper(s[i]) <= 90 ){
                isA = true;
                count += 1;
                cout << s[i];
            }
        }
        return count;
