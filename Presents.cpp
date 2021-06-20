#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	vector <int>v(n,0);
	for(int j=0;j<n;j++)
	{
		int a;
		cin>>a;
		v[a-1]=i;
		i++;
	}
	for(int i:v) cout<<i<<" ";
}