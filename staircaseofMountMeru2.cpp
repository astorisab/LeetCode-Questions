vector<vector<int>> generate(int numRows) {
        
//         brute force/overlapping problems
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1}, {1,1}};
        
        vector<vector<int>>nextRow = generate(numRows - 1);
        vector<int>add;
        add.resize(numRows);
        add[0] = 1;
        add[add.size() - 1] = 1; 
        int front = 1;
        int back  = add.size() - 2;
        
        for(int i = 1; i <= nextRow[nextRow.size() - 1].size()/2; ++i){
            add[front] = nextRow[nextRow.size() - 1][i] + nextRow[nextRow.size() - 1][i-1];
            
            add[back] = nextRow[nextRow.size() - 1][i] + nextRow[nextRow.size() - 1][i-1];
            ++front;
            --back;
        }
    
            
             
        nextRow.push_back(add);    
        return nextRow;
    }
