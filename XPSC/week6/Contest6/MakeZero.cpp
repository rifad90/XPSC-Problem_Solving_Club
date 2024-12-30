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
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag=false;
            for(int i=1;i<n/3;i++){
                if((n-(i*3))%4==0){
                    flag=true;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            // if (n >= 4)
            // {
            //     n = n % 4;
            // }
            // if (n >= 3)
            // {
            //     n = n % 3;
            // }
            // if (n == 0)
            // {
            //     cout << "YES" << endl;
            // }
            // else
            // {
            //     cout << "NO" << endl;
            // }
        }
    }

    return 0;
}