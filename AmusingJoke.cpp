#include<bits/stdc++.h>
using namespace std;
int main()
{
	//add comments ;)
	string g,h,m;
	cin>>g>>h>>m;
	string a=g+h;
	sort(a.begin(),a.end());
	sort(m.begin(),m.end());
	if(a==m) cout<<"YES";
	else cout<<"NO";

}
