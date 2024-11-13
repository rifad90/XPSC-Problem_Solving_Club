#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ans = 0;
        int a1, a2 = 0;
        // if (n % 2 == 0)
        // {
        //     if (y / 2 >= x)
        //     {
        //         a1 = (n / 2) * y;
        //     }
        //     else
        //     {
        //         a1 = n * x;
        //     }
        // }
        // else
        // {
        //     if ((y / 2) >= x && n>1)
        //     {
        //         a1 = (n / 2) * y +(n%2)*x;
        //     }
        //     else
        //     {
        //         a1 = n * x;
        //     }
        // }
        if(2*x>y){
            a1=n*x;
        }else{
            a1 = (n / 2) * y +(n%2)*x;
        }
        cout<<a1<<endl;
    }

    return 0;
}