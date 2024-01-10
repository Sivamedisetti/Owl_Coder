long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long ans=1;
		    while(n)
		    {
		        if(n&1)
		        {
		            n=n-1;
		            ans=((ans%M)*(x%M))%M;
		        }
		        else
		        {
		            n/=2;
		            x=((x%M)*(x%M))%M;
		        }
		    }
		    return ans%M;
		}
