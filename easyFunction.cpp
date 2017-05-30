#include <iostream>
using namespace std;

int main()
{
	long long int a,b,c,d,e,i,j,k;
	cin >>a;
	while(a--)
	{
		cin>>b>>c;
		while(b>0 && c>0)
		{
			if(b>=c)
			{
				k=b/c;
				b=b-(k*c);
			}
			else
			{
				k=c/b;
				c=c-(k*b);
			}
		}
		if(b>c)
			cout<<b<<endl;
		else
			cout<<c<<nedl;
	}
	return 0;
}