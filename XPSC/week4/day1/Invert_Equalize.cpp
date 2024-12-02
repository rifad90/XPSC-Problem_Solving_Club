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
        int n;
        cin >> n;
        char c[n];
        int one_count = 0;
        int zero_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (i == 0)
            {
                if (c[i] == '0')
                    zero_count++;
                else
                    one_count++;
            }
            if (c[i] == '0' && c[i - 1] != '0' && i != 0 )
                zero_count++;
            if (c[i] == '1' && c[i - 1] != '1' && i != 0)
                one_count++;
           // cout << zero_count << " " << one_count << endl;
        }
        //cout << zero_count << " " << one_count << endl;
        int minimum= min(zero_count,one_count);
        cout<<minimum<<endl;
    }

    return 0;
}