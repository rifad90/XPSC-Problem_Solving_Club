#include <bits/stdc++.h>
using namespace std;

//https://www.codechef.com/problems/LARGESUB
//input
// 4
// 4
// abba
// 2
// ab
// 1
// b
// 5
// aaabb

//output
// 4
// 1
// 1
// 3

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
        cin >> s;
      //  cout << s << endl;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
          //  cout<<s[i];
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                cnt1++;
              //  cout << cnt1 << " " << cnt2 << endl;
            }
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                cnt2++;
            //    cout << cnt1 << " " << cnt2 << endl;
            }
        }
       // cout << cnt1 << " " << cnt2 << endl;

        if (cnt1 == cnt2)
        {
            cout << n << endl;
        }
        else
        {
            int ans1 = n, ans2 = n;
            char first = s[0];
            char last = s[n - 1];
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != first)
                {
                    break;
                }
                ans1--;
            }

            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] != last)
                {
                    break;
                }
                ans2--;
            }
            cout << max(ans1, ans2) << endl;
        }
    }

    return 0;
}