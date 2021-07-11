#include <iostream>
#include <iomanip>
using namespace std;

//不是重複的點+另一個不是重複的點+(重複的點*2)=重複的點+要求的點+(重複的點*2)
//答案=所有點加總-重複的點*3
//p1+p3=p2+p4
//p4=(p1+p2*2+p3)-(p2*3)

int main()
{
	double x[4], y[4], sumX, sumY;
	while (cin >> x[0] >> y[0])
	{
		sumX = x[0];
		sumY = y[0];
		for (int i = 1;i < 4;i++)
		{
			cin >> x[i] >> y[i];
			sumX += x[i];
			sumY += y[i];
		}
		for (int i = 0;i < 4;i++)
			for (int j = i + 1;j < 4;j++)
			{
				if (x[i] == x[j] && y[i] == y[j])
				{
					cout << fixed << setprecision(3);
					cout << sumX - 3 * x[i] << " " << sumY - 3 * y[i] << endl;
					break;
				}
			}
	}
	return 0;
}