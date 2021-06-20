#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n,f=0,temp,sum1=0,sum2=0,q=1;
	string t;
	cin>>n>>t;
	for(int i=0;i<n;i++)
	{
		if(t[i]!='4'&& t[i]!='7')
		{
			cout<<"NO";
			return 0;
		}
		else
		{
			if(i+1<=n/2)
			{
				sum1+=(t[i]-'0');
				

			}
			else
			{
				sum2+=(t[i]-'0');
				
			}
		}
	}

	
	if((sum1==sum2) && (f==0))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	



}