#include <iostream>
using namespace std;
int arr[10000000];
int diagonal1[10000000];
int diagonal2[10000000];
int diagonal3[10000000];
long long int n;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int sum=0;
		cin >> n;
		diagonal1[0] = diagonal2[0] = 1;
		diagonal3[0] = 5;
		for(int i=1; i<n; i++)
		{
			diagonal1[i] = diagonal1[i-1]+(2*i);
		}
		for(int i=1; i<(n/2)+1; i++)
		{	
			diagonal2[i] = diagonal2[i-1]+(8*i);

		}

		for(int i=1; i<(n/2)+1; i++)
		{	
			diagonal3[i] = diagonal3[i-1]+(12+(8*(i-1)));

		}
		
		for(int i=0; i< n/2; i++)
		{
			sum = sum+diagonal3[i];
		}

		for(int i=0; i< (n/2)+1; i++)
		{
			sum = sum+diagonal2[i];
		}

		for(int i=0; i<n; i++)
		{
			sum=sum+diagonal1[i];
		}
		cout << sum-1 << endl;		
	}
	return 0;
