 vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        map<int,int>win;
        map<int,int>lose;
        vector<vector<int>>ans;
        vector<int>NL;
        vector<int>LO;
        for(int i=0;i<n;i++)
        {
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }
        for(auto it:win)
        {
            if(lose[it.first]==0)
            {
                NL.push_back(it.first);
            }
        }
        for(auto it:lose)
        {
            if(it.second==1)
            {
                LO.push_back(it.first);
            }
        }
        ans.push_back(NL);
        ans.push_back(LO);
        
        return ans;
    }
