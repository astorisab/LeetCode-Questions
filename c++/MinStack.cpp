//with unordered_map


class MinStack {
public:
    MinStack() {  
    };
    
    void push(int val) {
        s[++count] = val;
        if(count == 1 || s[minLoc] > val){
            minLoc = count; 
        }
    }
    
    void pop() {
//         O(n) needs works
        --count;
        int access = count;
        for(int i = 1; i <= count; ++i){
            // s[i] = s[i - 1];
            
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
        std::unordered_map<int,int>s;
        int minLoc = 0;
   
