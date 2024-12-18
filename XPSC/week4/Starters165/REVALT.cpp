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
        int n;
        cin >> n;
        string s;
        cin.ignore();
        cin >> s;
        int count = 0;
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count >= 2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}