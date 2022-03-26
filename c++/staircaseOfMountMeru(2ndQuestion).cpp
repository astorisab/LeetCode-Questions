vector<int> getRow(int rowIndex) {
//         brute. force
        if(rowIndex == 0) return {1};
        else if(rowIndex  == 1) return {1, 1};
        vector<int>ret = getRow(rowIndex - 1);
        vector<int>n;
        n.push_back(1);
        for(int i = 1; i < ret.size(); ++i){
            n.push_back(ret[i] + ret[i-1]);
        }
        n.push_back(1);
        return n;
    }
