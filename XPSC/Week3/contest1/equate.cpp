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
        int n, m;
        string s, t, s1 = "", t1 = "";
        cin >> n >> m >> s >> t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                s1 += s[i];
                s1 += 'b';
            }
            else
            {
                s1 += s[i];
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (t[i] == 'a')
            {
                t1 += t[i];
                t1 += 'b';
            }
            else
            {
                t1 += t[i];
            }
        }
        cout << s1 << " " << t1 << endl;
        //    if(s1==t1) cout<<"YES"<<endl;
        //    else cout<<"NO"<<endl;
    }

    return 0;
}