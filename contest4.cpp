#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,l,m,l1,a,b,count=0;
    
	cin>>t;
	while(t>0)
	{cin>>n>>k>>l;
    int m[k],l1[k];
	    for(int i=0;i<n;i++)
	    cin>>m[i]>>l1[i];
   
	while(k>0)
    {
        for(int i=0;i<n;i++)
    {
        if(l1[i]==l)
        {if(count<m[i] || count!=m[i])
        count=m[i];}  
        else
        cout<<"-1";
        
    }
cout<<count<<endl;
k--;
    }
    }
	return 0;
}