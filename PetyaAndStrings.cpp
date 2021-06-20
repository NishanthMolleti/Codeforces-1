#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]<92)
		{	
			a[i]+=32;
			
		}

	}
	for(int i=0;i<a.size();i++)
	{
		if(b[i]<92)
		{
			b[i]+=32;
		}
	}

	if(a < b) 
		{
			cout << -1;
		}
	else if(a > b) 
		{	
			cout << 1;
		}
	else if(a == b) 
		{
			cout << 0;
		}

}

/*#include <iostream>
#include <algorithm>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }
}*/