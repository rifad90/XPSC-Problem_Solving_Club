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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int happy = 0;
        for (int i = 0; i < n; i++)
        {
            int minD= min(a[i],b[i]);
            int maxD= max(a[i],b[i]);
           // cout<<minD<<" "<<maxD<<endl;
            if(minD*2<maxD ) 
            {
            }
            else happy++;
        }
        cout<<happy<<endl;
    }

    return 0;
}