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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int firstPos=-1,lastPos=-1;
        firstPos=s.find('B');
        lastPos=s.rfind('B');
        cout<<lastPos-firstPos+1<<endl;
    }
    
    
    return 0;
}