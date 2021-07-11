#include <iostream>
#include <map>
using namespace std;
int main() 
{
    int w, h;
    while (cin >> w >> h) 
    {
        map <int, int> mp;
        mp[w]++;
        mp[h]++;
        for (int i = 0; i < 5; i++) 
        {
            cin >> w >> h;
            mp[w]++;
            mp[h]++;
        }
        if (mp.size() > 3)//長寬高，不應出現更多變數
            cout << "IMPOSSIBLE\n";
        else 
        {
            bool flag = true;
            for (auto i : mp)//每種邊長出現次數應為4的倍數
            {
                if (i.second % 4 != 0) 
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "POSSIBLE\n";
            else
                cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}