#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n,x,y=0,f=0;
	    string s;
	    cin>>n>>x;
	    cin>>s;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[0]=='0' )
	        {
	            cout<<"NO"<<"\n";
	            y=1;
	            break;
	        }
	        else if(s[i]=='1')
	        {
	            f = x;
	        }
	        else
	        {
	            if(f>0) f--;
	            else
	            {
	                y=1;
	                cout<<"NO\n";
	                break;
	            }
	        }
	    }
	    if(y==0)
	    {
	        cout<<"YES"<<"\n";
	    }
	    
	}

}
