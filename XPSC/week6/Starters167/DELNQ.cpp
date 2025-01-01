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
        string s, t = "";
        cin >> s;
        int i_cnt=0;
        int o_cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0') o_cnt++;
            else i_cnt++;
        }
        if(i_cnt>0 && o_cnt>0){
            cout<<"1"<<endl;
        }else{
            cout<<max(i_cnt,o_cnt)<<endl;
        }
    }

    return 0;
}