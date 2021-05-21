#include<bits/stdc++.h>
using namespace std;
int main()
{
	int base,exp;
	int res=1;
	cin>>base;
	cin>>exp;
	while(exp)
	{
		if(exp&1==1)
		{
			res=res*base;
		}
		exp=exp>>1;
		base=base*base;
	}
	cout<<res;
}
