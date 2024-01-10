int main()
 {
 	Takeinput();  // N-INTEGERS EVREY INTEGER OCCURES TWICE. ONLY TWO INTEGERS APPEARES ONES.
 	int n;
 	cin>>n;      //T-O(N)
 	int a[n];     //S->O(1)
 	for(int i=0;i<n;i++)cin>>a[i];
 	int XOR=0,c=0,XOR1=0,XOR2=0;
 	for(auto it:a)
 	{
 		XOR^=it;
 	}
 	cout<<XOR<<"\n";
 	while(XOR)
 	{
 		if(XOR&1)
 		{
 			break;
 		}
 		c++;
 		XOR=XOR>>1;
 	}
 	cout<<c<<"\n";
 	for(auto it:a)
 	{
 		if(it&(1<<c))
 			XOR1^=it;
 		else
 			XOR2^=it;
 	}
 	cout<<XOR1<<" "<<XOR2;
 

 }
