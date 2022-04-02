if (strs.size() == 1) return strs[0];
        string prefix = "";
        int stringPos = 0;
        int i = 2;
        
        if(strs[0].length() == 0 || strs[1].length() == 0){return "";}
        int comp = std::max(strs[0].length() - 1, strs[1].length() - 1);
        while(strs[0][stringPos] == strs[1][stringPos] && stringPos <= comp){
            prefix += strs[0][stringPos];
            stringPos++;
        }
        if (prefix == "") {return "";} 
        if (stringPos > comp) {stringPos--;}
        
       
        while(i < strs.size()){
        
            while(stringPos >= 0){
  
            if(stringPos >= strs[i].length() || prefix[stringPos] != strs[i][stringPos]){ --stringPos;}
            else{break;}
                
            }
            if(stringPos < 0){ return "";}
            ++i;
        }
        
       

       return prefix.substr(0,stringPos + 1);
