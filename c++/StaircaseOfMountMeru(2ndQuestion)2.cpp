vector<int> getRow(int rowIndex) {
        
        
//         brute force/overlapping subproblems
        if(rowIndex == 0) return {1};
        else if(rowIndex  == 1) return {1, 1};
        
        
        
        vector<int>ret = getRow(rowIndex - 1);
        vector<int>n;
        n.resize(rowIndex + 1);
        n[0] = 1;
        n[n.size() - 1] = 1;
        int front  = 1;
        int back = n.size() - 2;
        for(int i = 1; i <= ret.size()/2; ++i){
            n[front] = ret[i] + ret[i-1];
            n[back] = ret[i] + ret[i-1];
            ++front;
            --back;
        }
        return n; 
    }
