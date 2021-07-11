#include<iostream>
using namespace std;
int main()
{
    int T, x, pos[200], index;
    string opt[200];
    cin >> T;
    while (T--)
    {
        index = 0;
        while(cin>>x)
        {
            x--;
            pos[x] = index++;
            if (cin.get() == '\n')
                break;
        }
        for (int i = 0;i < index;i++)
        {
            cin >> opt[i];
        }
        for (int i = 0;i < index;i++)
        {
            cout << opt[pos[i]] << endl;
        }
        if (T != 0)
            cout << endl;
    }
    return 0;
}