#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool flag = false;
        if (n == m && s == t)
            cout << "YES" << endl;
        else if (n < m)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                if (s[i] != t[i])
                {
                     cout << i << endl;
                     i--;
                    if (s[i + 1] == s[i + 2] && s[i] != s[i + 3])
                    {
                       
                        for (int j = i + 1; j < n - 2; j++)
                        {
                            s[j] = s[j + 2];
                        }
                        n = n - 2;
                        s = s.substr(0, n - 1);
                    }
                }

                if (s == t)
                {
                    flag = true;
                    break;
                }
                cout << s << " " << t << endl;
            }
            if (flag)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}