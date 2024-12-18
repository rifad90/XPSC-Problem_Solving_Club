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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] - count < 0)
            {
                sum += 0;
            }
            else
            {
                sum += v[i] - count;
            }
            count++;
        }
        cout << sum << endl;
    }

    return 0;
}