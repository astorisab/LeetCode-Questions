string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];
        bool change = false;
        int comp = 0;
        string maxStr = "";
        for(int i = strs.size() - 1; i > 0; i--){
            string sub = "";
            int start = 0;
            for(auto x : strs[i]){

                if (start >= strs[comp].length()){break;}
                else{ 
                    if(strs[comp][start] != x){ cout << sub; break;}
                    else{sub += x;}        
                }
                 
                start += 1;
                
            }
            
            if (sub.length() < maxStr.length() || (sub != "" && maxStr == "" && !change)){
                
                maxStr = sub;               
                if (strs[comp].length() > strs[i].length()){
                comp = i;
                }
                
            }
            if (change == false) {change = true;}
            
            sub = "";
            
        }
        return maxStr;
    }
