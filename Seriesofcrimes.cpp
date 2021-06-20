#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v;
	for(int i=0;i<n;i++)
	{
		vector<int> v1;
		for(int j=0;j<m;j++)
		{
			char a;
			cin>>a;
			v1.push_back(a);
		}
		v.push_back(v1);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==42){cout<<i<<j<<" ";}
			
		}
		cout<<endl;
	}


}

