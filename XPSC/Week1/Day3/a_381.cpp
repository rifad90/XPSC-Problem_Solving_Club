#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        dq.push_back(a);
    }

    int ans1=0, ans2=0, move = 1;
    while (!dq.empty())
    {
        int l = dq.front();
        int r = dq.back();
        int mx = max(l, r);
        if (move % 2 == 0)
        {
            ans2 += mx;
        }
        else
        {
            ans1 += mx;
        }
        if (mx == l)
            dq.pop_front();
        else
            dq.pop_back();
        move++;
    }

    cout << ans1 << " " << ans2 << endl;
    return 0;
}