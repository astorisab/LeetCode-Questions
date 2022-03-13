int romanToInt(string s) {
        int inte = 0;
        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case 'I':
                    inte += 1;
                break;
                case 'V':
                    if (i !=  0 && s[i - 1] == 'I') inte += 3;
                    else inte += 5; 
                break;
                case 'X':
                    if (i !=  0 && s[i - 1] == 'I') inte += 8;
                    else inte += 10;
                break;
                case 'L':
                    if (i !=  0 && s[i - 1] == 'X') inte += 30;
                    else inte += 50;
                break;
                case 'C':
                    if (i !=  0 && s[i - 1] == 'X') inte += 80;
                    else inte += 100;
                break;
                case 'D':
                    if (i !=  0 && s[i - 1] == 'C') inte += 300; 
                    else inte += 500;    
                break;
                case 'M':
                if (i !=  0 && s[i - 1] == 'C') inte += 800;
                else inte += 1000;
                    
                default:
                break;
                
            }
        }
        return inte;
    }
