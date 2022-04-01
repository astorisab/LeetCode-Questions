// with vector

class MinStack {
public:
    MinStack() {  
    };
    
    void push(int val) {
        ++count;
        
        if(count == s.size()){
            s.push_back(val);
        }else{
            s[count] = val; 
        }
        if(count == 0 || s[minLoc] > val){
            minLoc = count; 
        }
    }
    
    void pop() {
//         O(n) needs works
        --count;
        int access = count;
        
        for(int i = 0; i <= count; ++i){
            if(s[access] > s[i]){
                access = i;
            }
        }
        minLoc = access;
    }
    
    int top() {
        return s[count];
    }
    
    int getMin() {
        return s[minLoc];
    }
 private:
        std::vector<int>s;
        int minLoc = 0;
        int count = -1;
};
