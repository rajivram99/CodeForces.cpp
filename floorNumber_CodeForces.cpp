#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		if(n<=2)
		{
			cout<<"1\n";
		}
		else
		{
			n-=2;
			cout<<(n+x-1)/x+1<<"\n"; //to calculate upper bound
		}
	}
	return 0;
}
/*
5 divide 2
if you want 3 and not 2.5
then,

5+(2-1) n+(x-1)
5+1=6


6/2 = 3
/*


