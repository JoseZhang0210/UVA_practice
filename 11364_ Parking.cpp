#include <iostream>
using namespace std;
int main()
{
	int t, n, xi;
	cin >> t;
	for (int cases = 1;cases <= t;cases++)
	{
		cin >> n;
		int bigger = 0, smaller = 100;
		while (n--)
		{
			cin >> xi;
			if (bigger < xi)bigger = xi;
			if (xi < smaller)smaller = xi;
		}
		cout << (bigger - smaller) * 2 << endl;
	}
	return 0;
}