#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    char A,B,C,D,E,F;
	    cin>>A>>B>>C>>D>>E>>F;
	    if(A =='W' and B=='W' and C=='W')
	    {
	        cout<<"YES"<<"\n";
	    }
	    else if( B=='W' and C=='W' and D=='W')
	    {
	        cout<<"YES"<<"\n";
	    }
	    else if(C=='W' and D=='W' and E=='W')
	    {
	        cout<<"YES"<<"\n";
	    }
	    else if(D=='W' and E=='W' and F=='W')
	    {
	        cout<<"YES"<<"\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	    
	    
	}

}
