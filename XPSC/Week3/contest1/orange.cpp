#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool flag = false;
        // if(k/)
        for (int i = 0; i <= n; i++)
        {
            if (flag)
                break;
            for (int j = 0; j <= n - i; j++)
            {
                if (flag)
                    break;
                int l = n - i - j;
                int num = i * 10 + j * 11 + l * 12;
                if (num == k)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}