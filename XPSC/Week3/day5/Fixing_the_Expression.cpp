#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n1 = s[0] - '0';
        int n2 = s[2] - '0';
        if (n1 < n2)
        {
            cout << n1 << "<" << n2<<endl;
        }
        else if (n1 > n2)
        {
            cout << n1 << ">" << n2<<endl;
        }
        else
        {
            cout << n1 << "=" << n2<<endl;
        }
    }
    return 0;
}