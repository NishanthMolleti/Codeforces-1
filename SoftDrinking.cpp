#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
	return (a<b);
}
int main()
{
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int a=min({(k*l)/nl, c*d, p/np},comp)/n;
	cout<<a;


}