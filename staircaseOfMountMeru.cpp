vector<vector<int>> generate(int numRows) {
        
//         brute force
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1}, {1,1}};
        
        vector<vector<int>>nextRow = generate(numRows - 1);
        vector<int>add;
        
        
        
        add.push_back(nextRow[nextRow.size() - 1][0]);
        
        for(int i = 1; i < nextRow[nextRow.size() - 1].size(); ++i){
            add.push_back(nextRow[nextRow.size() - 1][i] + nextRow[nextRow.size() - 1][i-1]);
        }
        add.push_back(nextRow[nextRow.size() - 1][nextRow[nextRow.size() - 1].size() -1]);

        nextRow.push_back(add);    
        return nextRow;
    }
};

