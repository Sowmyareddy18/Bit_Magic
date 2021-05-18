#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cin>>num;
	while(num)
	{
		if(num&1==1)
		{
			count++;
		}
		num=(num>>1);
	}
	cout<<count;
	return 0;
}
