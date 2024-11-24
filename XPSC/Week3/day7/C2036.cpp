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
        string s;
        cin >> s;
        set<int> index;
        if (s.size() > 3)
        {
            for (int i = 0; i < s.size() - 4; i++)
            {
                if (s.substr(i,4) == "1100")
                {
                    index.insert(i);
                }
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int inx;
            char c;
            cin >> inx >> c;
            inx--;
            s[inx] = c;
          //  cout<<s<<endl;
            if (s.size() < 4)
            {
                cout << "NO" << endl;
            }
            else
            {
                
                for (int i = inx - 3; i <= inx; i++)
                {
                    if (i >= 0 && i <= s.size() - 4)
                    {
                        if (s.substr(i,4) == "1100")
                        {
                            index.insert(i);
                        }
                        else
                        {
                            index.erase(i);
                        }
                    }
                }
                if (index.size() > 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}