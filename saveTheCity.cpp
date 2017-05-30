#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int arr[n];
		long long int x;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			arr[i]=x%m;
		}
		int product = 1;
		for(int i=0; i<n; i++)
		{
			product = (product*arr[i])%m;
		} 
		cout << product%m << endl;
	}
	return 0;
}