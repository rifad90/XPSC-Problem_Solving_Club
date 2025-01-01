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
        int mx = 100000000;
        int mn = -1;
        int num = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i != 0)
            {
                if (v[i] < num && v[i] > mn)
                {
                    mn = v[i];
                }
                if (v[i] > num && v[i] < mx)
                {
                    mx = v[i];
                }
            }
            else
            {
                num = v[0];
            }
        }
       //  cout<<mn<<" "<<num<<" "<<mx<<endl;

        int l_bount, hi_bount;
        
        if (mn != -1 && (num + mn) % 2 == 0)
        {
            l_bount = (num + mn) / 2;
        }
        else if (mn != -1)
        {
            l_bount = 1 + ((num + mn) / 2);
        }else if(mn==-1){
            l_bount=1;
        }

        if (mx!=100000000){
            hi_bount=(num + mx) / 2;
        }else{
            hi_bount=1000000;
        }
      //   cout<<l_bount<<" "<<num<<" "<<hi_bount<<endl;

        cout<<hi_bount-l_bount+1<<endl;
    }

    return 0;
}