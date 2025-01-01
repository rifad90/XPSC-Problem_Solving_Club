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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        // cout<<n<<" ";
        long long int prefix_sum = 0, moves = 0;
        for (int i = 0; i < n; i++)
        {
            prefix_sum += v[i]; 
            // cout<<prefix_sum<<" ";
            moves += abs(prefix_sum);
        }
        // cout<<endl;
        cout << moves << endl;
    }

    return 0;
}