int strStr(string haystack, string needle) {
        if(needle == haystack || needle == ""){return 0;}
        for(int i = 0; i < haystack.size(); ++i){
            int store = i;
            int start = i;
            if(haystack[i] == needle[0]){
                bool isNeed = true;
   
                // bool isMove = false;
                for(int j = 1; j < needle.size(); j++){
                    ++i;
                    // if(haystack[i] == needle[0] && !isMove){start = i; isMove = true;}
                    if(haystack[i] != needle[j]){ 
                        isNeed = false;
                        i = start;
                        break;
                       
                    }
                 
                }
                if(isNeed) {return store;}
            }
            // if(haystack.substr(i, needle.size()) == needle){return i;}
        }
        return -1;
    }
