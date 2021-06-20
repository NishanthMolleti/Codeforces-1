#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=0;
	vector <long long>v;
	for(int i=0;i<4;i++)
	{
		long long q;
		cin>>q;
		v.push_back(q);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<3;i++)
	{
		if(v[i]==v[i+1]) c++;
	}
	cout<<c;



}