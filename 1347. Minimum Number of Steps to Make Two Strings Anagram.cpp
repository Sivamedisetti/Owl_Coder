 int minSteps(string s, string t) {
        map<char,int>ms;
        map<char,int>mt;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            ms[s[i]]++;
            mt[t[i]]++;
        }
        int ans=0;
        for(auto it:ms)
        {
            int b=mt[it.first];
            if(it.second>b)
            {
                ans+=it.second-b;
            }
        }
        return ans;
