vector<int>Prime(1000,1);
class Solution {
  public:
    
    void seive()
    {
        Prime[0]=0;
        Prime[1]=0;
        for(int i=2;i*i<=1000;i++)
        {
        	if(Prime[i]==1)
        	{
        		for(int j=i*i;j<=1000;j+=i)
        		{
        			Prime[j]=0;
        		}
        	}
            
        }
    }
    int primeSetBits(int L, int R){
        // code here
        int c=0;
        seive();
        for(int i=L;i<=R;i++)
        {
            int k=__builtin_popcount(i);
            if(Prime[k])
            {
                c++;
            }
        }
        return c;
        
    }
};
