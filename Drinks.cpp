#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,d;
	cin>>n;
	d=n;
	double c=0;
	vector <double>v;
	while(n--)
	{
		double a;
		cin>>a;
		v.push_back(a);

	}
	//double b= *max_element(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++)
	{
		
		v[i]=double(v[i])/double(100);
		c+=v[i];
		
	}
	
	cout<<setprecision(12)<<c/d;
	
}