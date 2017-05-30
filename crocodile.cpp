#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long int w, x;
		cin >>n >>w;
		long long int arr[n];
		for(int i=0; i<n; i++)
		{
			cin >> x;
			arr[i]=x;
		}
		long long int sum=0;
		for(int i=0; i<n; i++)
		{
			sum = sum+arr[i];
		
}		if(sum==w)
			cout << "yes" << endl;
		else 
			cout << "no" << endl;
	}
	return 0;
}