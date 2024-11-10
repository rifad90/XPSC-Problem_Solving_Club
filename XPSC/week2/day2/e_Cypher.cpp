#include <bits/stdc++.h>
using namespace std;


// 3
// 3
// 9 3 1
// 3 DDD
// 4 UDUU
// 2 DU
// 2
// 0 9
// 9 DDDDDDDDD
// 9 UUUUUUUUU
// 5
// 0 5 9 8 3
// 10 UUUUUUUUUU
// 3 UUD
// 8 UUDUUDDD
// 10 UUDUUDUDDU
// 4 UUUU


// 2 1 1 
// 9 0 
// 0 4 9 6 9 


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int pos[n];
        for (int i = 0; i < n; i++)
        {
            cin>>pos[i];
        }
        int m=n;
        int i=0;
        while(m--){
            int move;
            cin>>move;
            cin.ignore();
            string s;
            cin>>s;
            for(int j=move-1;j>=0;j--){
                if(s[j]=='D'){
                    pos[i]++;
                    if(pos[i]==10) pos[i]=0;
                }
                if(s[j]=='U'){
                    pos[i]--;
                    if(pos[i]==-1) pos[i]=9;
                }

            }
            i++;
        }

        for (int i = 0; i < n; i++)
        {
            cout<<pos[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}