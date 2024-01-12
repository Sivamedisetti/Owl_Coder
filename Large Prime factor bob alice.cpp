int mod=1000001;
vector<int>vec(mod,1);
void  Primefactor()   //Prime factor.
{
	vec[0]=0;
    vec[1]=0;
	for(int i=2;i<=mod;i++)
	{
		if(vec[i]==1)
		{
			vec[i]=i;
			for(int j=2*i;j<=mod;j+=i)
			{
				vec[j]=i;
			}
		}
	}
}
int main()
{
	Takeinput();
	Primefactor();
	int n;
	cin>>n;
	map<int,int>mp;
	vector<int>arr(n,0);
	int temp=0;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		temp=arr[i];
		while(temp!=1)
		{
			mp[vec[temp]]++;
			temp=temp/vec[temp];
		}
	}
	long long ans=1;
	for(auto it:mp)
	{
		ans=ans*(it.second+1);
	}
	cout<<ans;
	
}
