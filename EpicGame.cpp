#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	int d;
	int ac=0,bc=0,t=n;
	for(int i=0;i<=t;i++)
	{
		if(i%2==0) 
		{
			d=__gcd(a,n);
			if(n>-1)
			{
				n-=d;
				if(n<0)
				{
					ac=-1;
					break;
				}

				//cout<<n<<endl;
			}
			/*else if(n<0)
			{
				ac=-1;
				break;
			}*/
		}
		else
		{
			d=__gcd(b,n);
			if(n>-1)
			{
				n-=d;
				if(n<0)
				{
					bc=-1;
					break;
				}

				//cout<<n<<endl;
				
			}
			/*else if(n<0)
			{
				bc=-1;
				break;
			}*/
		}
	}
	if(ac==-1) cout<<1;
	else cout<<0;
}