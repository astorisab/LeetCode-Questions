
  string addBinary(string a, string b) {

int enda = a.size() - 1;
        int endb = b.size() - 1;
        string end  = "";
        int carry = 0;
        bool isend  = true;
        while(enda >= 0 || endb >= 0 || carry > 0){
            int valuea = 0;
            int valueb = 0;
        
            
            if(enda >= 0){
                if(a[enda] == '1'){
                   valuea = 1; 
                }
                carry = valuea ^ carry;
                enda--;
                isend = false;
            }
            if(endb >= 0){
                if(b[endb] == '1'){
                    valueb = 1;
                }
                carry = valueb ^ carry;
                endb--;
                isend = false;
            }
            
            
            end += carry + '0';
carry = (!isend && valuea == valueb  && valuea == 1) || ((valuea ^ valueb) == 1 && carry == 0); 
        }
        
        reverse(end.begin(), end.end());
        return end;
        }
