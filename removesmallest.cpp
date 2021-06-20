#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());

		
		for(int i=1;i<n;i++)
		{
			
			if(v[i]-v[i-1] > 1) 
			{	
				c++;
				break;
			}
			
		}
		
		
		if(c!=0) {cout<<"NO"<<endl;}
		else {cout<<"YES"<<endl;}
	}
}

/*#include<cstdio>
#include<algorithm>

using namespace std;
const int N = 50007;

int a[N];
int n, m, t;
int main()
{
    scanf("%d", &t);
    while(t -- ){
        scanf("%d", &n);
        bool flag = 0;
        for(int i = 1; i <= n; ++ i){
            scanf("%d", &a[i]);
        }
        sort(a + 1, a + 1 + n);
        for(int i = 1; i < n; ++ i){
            if(a[i + 1] - a[i] > 1){
                flag = 1;
                break;
            }
        }
        if(!flag)puts("YES");
        else puts("NO");
    }
    return 0;
}
*/

