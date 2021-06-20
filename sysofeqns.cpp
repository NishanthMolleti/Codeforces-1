#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c=0;
	cin>>n>>m;
	for(int b=0;b<n && (b*b)<m;b++)
	{
		int a=m-b*b;
		if(a*a+b==n) c+=1;
	}
	cout<<c;
}