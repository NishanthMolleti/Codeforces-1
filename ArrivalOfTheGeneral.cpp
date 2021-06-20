#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	vector<int> v;

	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	int max=v[0],min=v[0];
	int maxindex=0,minindex=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]>max)
		{
			max=v[i];
			maxindex=i;
		}
		if(v[i]<=min)
		{
			min=v[i];
			minindex=i;
		}


	}
	n=n-1;
	if(maxindex>minindex)
	{
		minindex++;
	}
	cout<<(maxindex+n-minindex);
}