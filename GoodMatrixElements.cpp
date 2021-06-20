#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++)
	{
		vector <int>v1;
		for(int j=0;j<n;j++)
		{
			int a;
			cin>>a;
			v1.push_back(a);
		}
		v.push_back(v1);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j || i==n/2 || j==n/2 || i+j==(n-1))
			{
				c+=v[i][j];
				
			}
		

		}
		
		
	}
	cout<<c;

}