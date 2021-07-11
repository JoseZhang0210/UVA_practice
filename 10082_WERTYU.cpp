#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
	string t = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
	string a;
	while (getline(cin, a))
	{
		for (int i = 0;i < a.length();i++)
		{
			if (isblank(a[i]))cout << " ";
			else
			{
				for (int c = 0;c < t.length();c++)
				{
					if (t[c] == a[i])
					{
						c--;
						cout << t[c];
						break;
					}
				}
			}
		}
		cout << endl;
	}
}