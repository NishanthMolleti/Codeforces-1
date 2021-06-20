#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=0;
	int sum=0;
	while(n--)
	{
		vector<int> v;
		int i=2;
		while(i--)
		{
			int a;
			cin>>a;	
			v.push_back(a);

		}
		sum=sum-v[0];
		//if(sum>max) {max=sum;}
		sum=sum+v[1];
		if(sum>max) {max=sum;}
	}
	cout<<max;

}