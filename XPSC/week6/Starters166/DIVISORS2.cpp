#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int fac(int m)
{
    if (m == 1)
        return 1;
    return m * (fac(m - 1));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int fa = fac(m);
    vector<int> v(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a * fa;
        //   cout<<v[i]<<" ";
        mx = max(v[i], mx);
    }
    // cout<<endl<<mx<<endl;
    vector<int> d(mx+1);
    int cn = 0;
    for (int i = 1; i <=mx ; i++)
    {
        cn = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cn++;
            }
        }
        if(i==1) d[i]=1;
         else d[i] = cn;
      // cout << d[i] << " ";
    }
    cout<<endl;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        b[i] = d[v[i]];
    }
    for (int i = 0; i < n; i++)
    {
         cout<<b[i]<<" ";
    }
    return 0;
}