#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.size();
        int l2=s2.size();
        if(s1[l1-1]=='S'){
            int num_x1=l1-1;
            if(s2[l2-1]=='S'){
                int num_x2=l2-1;
                if(num_x1>num_x2) cout<<"<"<<endl;
                else if(num_x1<num_x2) cout<<">"<<endl;
                else cout<<"="<<endl;
            }
            if(s2[l2-1]=='L'){
                cout<<"<"<<endl;
            }
            if(s2[l2-1]=='M'){
                cout<<"<"<<endl;
            }
        }
        if(s1[l1-1]=='L'){
             int num_x1=l1-1;
            if(s2[l2-1]=='L'){
                int num_x2=l2-1;
                if(num_x1>num_x2) cout<<">"<<endl;
                else if(num_x1<num_x2) cout<<"<"<<endl;
                else cout<<"="<<endl;
            }
            if(s2[l2-1]=='S'){
                cout<<">"<<endl;
            }
            if(s2[l2-1]=='M'){
                cout<<">"<<endl;
            }
        }
    }
    
    return 0;
}