#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,c=0;
	cin>>n>>k;
	vector<int> v;
	while(n>0)
	{
		int a;
		cin>>a;
		v.push_back(a);
		n--;
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>0 && v[i]>=v[k-1])
		{
			c++;
		}
		//cout<<v[i]<<" "<<i<<endl;
	}
	cout<<c;

}