 bool isIsomorphic(string s, string t) {
        std::vector<int>ss;
        std::vector<int>tt;
        ss.resize(256, -1);
        tt.resize(256, -1);
        
        
        int count = 0;
        for(auto x : s){
            int sascii = 256 - int(x);
            int tascii = 256 - int(t[count]);
            if(ss[x] == -1 && tt[t[count]] == -1){
                ss[x] = tascii;
                tt[t[count]] = sascii;
            }else if(ss[x] != tascii || tt[t[count]] != sascii){
                return false;
            }
            
            ++count;
           
        }
        return true;
    }
