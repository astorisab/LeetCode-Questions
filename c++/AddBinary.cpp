string addBinary(string a, string b) {
        int enda = a.size() - 1;
        int endb = b.size() - 1;
        string end  = "";
        int carry = 0;
        
        while(enda >= 0 && endb >= 0){
            if(a[enda] == b[endb]){
           
                if(carry == 1){
                    
                    if(a[enda] == '1'){
                        if(carry == 1){
                           end += "1";
                        }else{
                           end += "0";           
                        }
                    }
                    else{
                        if(carry == 1){
                            end += "1";
                            carry = 0;
                        }else{
                            end += "0";
                        }  
                    }
                }
                else if(a[enda] == '1'){
                    carry = 1;
                    end += "0";
                    
                }else{
                    end += "0";                    
                }
            }
            else{
               if(carry == 1){
                    end += "0";
               }else{
                   end += "1";
               }
                
            }
            enda -= 1;
            endb -= 1;
        }
        
        
//      function territory
        
        if(enda >= 0 || endb >= 0){
            string curStr = a;
            int curAcc = enda;
            if(endb >= 0){
                curStr = b;
                curAcc = endb;
            }
      
            while(curAcc >= 0){
                
                if(carry == 1){
                    if(curStr[curAcc] == '1'){
                        end += "0";
                    }else{
                        end += "1";
                        carry = 0;
                    }
                    
                }else{
//                     possible runtime change
                    end += curStr[curAcc];
                    
                }
                
                curAcc -= 1;
         
            }
            if(carry == 1){
                end += "1";
            }
        }else if(carry == 1){
            end += "1";
        }
    
        
       
        reverse(end.begin(), end.end());
        return end;
    }
