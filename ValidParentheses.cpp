bool isValid(string s) {
        stack<char>vpath;
        for(auto x : s){
            if(x == '(' || x == '[' || x == '{'){
                vpath.push(x);
            }else if(vpath.empty()){
                return false;
            }else{
            switch(x){
                case ')':
                    if(vpath.top() == '(') vpath.pop();
                    else return false;
                    break;
                case '}':
                    if (vpath.top() == '{') vpath.pop();
                    else return false;
                    break;
                case ']':
                     if (vpath.top() == '[') vpath.pop();
                    else return false;
                    break;
                default:                
                    cout << "this should not fire";
                    ;
            }
            }
        }
        return vpath.empty();
    }
