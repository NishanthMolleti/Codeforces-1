
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	int cnt=0;
	for(int i=0;i<s.length();i++)
	   if(s[i]==s[s.length()-1])
	      cnt++; 
	for(int i=0;i<cnt;i++)
	  cout<<s[s.length()-1];
	cout<<endl;
	return 0;
}