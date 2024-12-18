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
        int n, m, k;
        cin >> n >> m >> k;

        int mid = k / 2;
        int mini = INT_MAX;
        for (int i = 1; i <= k / 2 + 1 && i<=n; i++)
        {
            for (int j = 1; j <= k / 2 + 1 && j<=m; j++)
            {
                int area= 2*(i+j);
              //  cout<<area<<" ";
                mini=min(mini,abs(area-k));
            }
        }
       // cout<<endl;
        cout<<mini<<endl;
    }

    return 0;
}