#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	set <char>s1;
	for(char i:s) 
		s1.insert(i);

	int q=s1.size();
	if(q%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}