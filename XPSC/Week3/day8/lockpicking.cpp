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
        int n, m;
        cin >> n >> m;
        cin.ignore();
        string s, k;
        cin >> s >> k;
        bool found=false;
        for(int i=0;i<=n-k.size();i++){
           // cout<<s.substr(i,m)<<endl;
            if(s.substr(i,m)==k){
                found=true;
                break;
            }
        }
        if (found)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int move = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int move_count = 0;
                int d = i;
                for (int j = 0; j < m; j++)
                {
                    int a = s[d] - '0';
                    int b = k[j] - '0';
                    //  cout<<a<<" "<<b<<endl;
                    int f_move = abs(a - b);
                    if (f_move > 5)
                    {
                        f_move = 10 - f_move;
                    }

                    move_count += f_move;
                // cout<<move_count<<" "<<f_move<<" ";
                    d++;
                    if (d == n)
                        break;

                    if (((n - d) < (m - (j + 1))) >= n)
                        break;
                }
                // cout<<move_count<<" "<<endl;
                move = min(move, move_count);

                if ((n - (i + 1)) < m)
                    break;
              //   cout<<move<<" ";
            }
            cout << move << endl;
        }
    }

    return 0;
}