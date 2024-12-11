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
        string s, t;
        cin >> s >> t;
        if (s == t)
            cout << "YES" << endl;
        else
        {
            bool flag = true;
            if (s.size() == 1)
                cout << "NO" << endl;
            else
            {
                if (n % 2 == 0)
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        if ((s[i] == '0' && s[i + 1] == '0') && (t[i] == '0' && t[i + 1] == '0'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '0' && s[i + 1] == '1') && (t[i] == '0' && t[i + 1] == '1'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '0') && (t[i] == '1' && t[i + 1] == '0'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '1') && (t[i] == '1' && t[i + 1] == '1'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '0' && s[i + 1] == '0') && (t[i] == '1' && t[i + 1] == '1'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '1') && (t[i] == '0' && t[i + 1] == '0'))
                        {
                            //  i=i+1;
                        }
                        else if ((s[i] == '0' && s[i + 1] == '1') && (t[i] == '1' && t[i + 1] == '0'))
                        {
                            //  i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '0') && (t[i] == '0' && t[i + 1] == '1'))
                        {
                            //  i=i+1;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < n ; i++)
                    {
                        if(i==n-2){

                        }
                        if ((s[i] == '0' && s[i + 1] == '0') && (t[i] == '0' && t[i + 1] == '0'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '0' && s[i + 1] == '1') && (t[i] == '0' && t[i + 1] == '1'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '0') && (t[i] == '1' && t[i + 1] == '0'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '1') && (t[i] == '1' && t[i + 1] == '1'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '0' && s[i + 1] == '0') && (t[i] == '1' && t[i + 1] == '1'))
                        {
                            // i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '1') && (t[i] == '0' && t[i + 1] == '0'))
                        {
                            //  i=i+1;
                        }
                        else if ((s[i] == '0' && s[i + 1] == '1') && (t[i] == '1' && t[i + 1] == '0'))
                        {
                            //  i=i+1;
                        }
                        else if ((s[i] == '1' && s[i + 1] == '0') && (t[i] == '0' && t[i + 1] == '1'))
                        {
                            //  i=i+1;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }

                if (flag)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}