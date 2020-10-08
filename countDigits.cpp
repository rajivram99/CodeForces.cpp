#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
	return floor(log10(n)+1);
}

int main()
{
	int n;
	cin>>n;
	int cd = countDigits(n);	
        cout<<cd;
	return 0;
}
