#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int c=0;
	for(auto i:a)
	{
		if(i=='4' || i=='7')
		{
			c++;
		}
	}
	if(c==4 || c==7)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}