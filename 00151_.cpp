#include <iostream>

using namespace std;
int memo[1000][1000] = { 0 };
//Josephus problem => g(人數, 間隔)==編號
//g(1, m) = 0
//g(n, m) = (g(n - 1, m) + m) % n
//目標13 && 編號由0起算 && 1號先停電=> g(n, m)==11

int g(int n, int m)
{
	if (memo[n][m] != 0 || n == 1)
	{
		return memo[n][m];
	}
	else
	{
		memo[n][m] = (g(n - 1, m) + m) % n;
		return memo[n][m];
	}
}

int main()
{
	int n, m;
	while (cin >> n && n != 0)
	{
		n--;
		m = 0;
		while (1)
		{
			m++;
			if (g(n, m) == 11)break;
		}
		cout << m << endl;
	}
	return 0;
}