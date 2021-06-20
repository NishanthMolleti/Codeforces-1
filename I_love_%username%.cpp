#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,c=0;
	cin>>a;
	vector<int> v;
	for(int i=0;i<a;i++)
	{
		int b;
		cin>>b;
		v.push_back(b);
	}
	int min=v[0],max=v[0];
	for(int i=1;i<v.size();i++)
	{

		if(v[i]<min) 
		{
			min=v[i];
			
			c++;
		}
		//cout<<endl;
		if(v[i]>max) 
		{
			max=v[i];
			
			c++;
		}

	}

	cout<<c;
}