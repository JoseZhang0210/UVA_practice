#include<iostream>
using namespace std;
int main()
{
	int G=0;
	string input;
	int GLength;
	while (cin >> G && G != 0)
	{
		cin >> input;
		GLength = input.size() / G;
		for (int g = 1;g <= G;g++)
			for (int i = g * GLength-1;i >= (g - 1) * GLength;i--)
			{
				cout << input[i];
			}
		cout << endl;
	}
	return 0;
}