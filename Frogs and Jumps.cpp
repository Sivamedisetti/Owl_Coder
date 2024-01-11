int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        int l=leaves;
        vector<int>vec(l+1,1);
        vector<int>frog;
        vec[0]=0;
        for(int i=0;i<N;i++)
        {
            frog.push_back(frogs[i]);
        }
         for(auto it:frog)
        {
            if(it==1)
            {
                return 0;
            }
            else
            {
                if(it<=l and vec[it]==1)
                {
                    for(int j=it;j<=l;j+=it)
                    {
                        vec[j]=0;
                    }
                }
            }
        }
        int c=0;
        for(auto it:vec)
        {
            if(it==1)c++;
        }
        return c; 
    }
