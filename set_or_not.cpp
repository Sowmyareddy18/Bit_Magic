#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,position;
	cin>>num;
	cin>>position;
	if(num&(position-1)<<1)
	{
		cout<<"set state";
	}
	else
	{
		cout<<"not set state";
	}
	return 0;
}
