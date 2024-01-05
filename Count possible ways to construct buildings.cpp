	int TotalWays(int N)
	{
	    // Code here
	   long long  a=0,b=1;
	   long long c=a+b;
	   int mod=1e9+7;
	    for(int i=0;i<N;i++)
	    {
	       a=b;
	       b=c;
	       c=a+b;
	       c=c%mod;
	    }
	    //cout<<c<<"\n";
	    return (1LL*c*c)%mod;
