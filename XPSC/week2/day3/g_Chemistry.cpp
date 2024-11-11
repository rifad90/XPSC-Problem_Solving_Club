#include <bits/stdc++.h>
using namespace std;


// 14
// 1 0
// a
// 2 0
// ab
// 2 1
// ba
// 3 1
// abb
// 3 2
// abc
// 6 2
// bacacd
// 6 2
// fagbza
// 6 2
// zwaafa
// 7 2
// taagaak
// 14 3
// ttrraakkttoorr
// 5 3
// debdb
// 5 4
// ecadc
// 5 3
// debca
// 5 3
// abaac


// YES
// NO
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// NO
// YES













int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int even=0,odd=0;
        for(auto [c,cnt]:mp){
            if(cnt%2==0) even++;
            else odd++;
        }

         if(odd>0 && m>0){
            if(odd>=m){
                odd -=m;
                m -=m;
                n-=m;
              //  cout<<odd<<" "<<m<<endl;
            }else{
                m-=odd;
                odd-=odd;
                 n-=odd;

              //  cout<<odd<<" "<<m<<endl;
            }
        }





        bool ans=false;

        int remain=n-m;
        if(remain>0){
            if(remain%2==0){
                if(odd==0 || odd==1) ans=true;
                else ans= false;
            }else if(remain==1){
                 ans=true;
            }
            else{
               // cout<<remain<<"->"<<odd<<endl;
                if(odd==0 || odd==1) ans=true;
                else ans= false;
            }
        }else{

        }
        // if(odd>0 && m>0){
        //     if(odd>=m){
        //         odd -=m;
        //         m -=m;
        //         n-=m;
        //       //  cout<<odd<<" "<<m<<endl;
        //     }else{
        //         m-=odd;
        //         odd-=odd;
        //          n-=odd;

        //       //  cout<<odd<<" "<<m<<endl;
        //     }
        // }
         
        // if((even>0 && m>0) && m%2==0){
        //     even -= (m/2);
        //      n-= (m/2);

        // }else if ( m>0 && m%2!=0){
        //      even -= (m/2);
        //      n-= (m/2);
        //      m /=2;
        //      n-=m;
        //      m-=m;

        // }
        // else if(m==0){
        //     //ans=false;
        //     //  cout<<ans<<endl;
        // }else{
        //     ans=false;
        // }
        // if(n==0){
        //     ans=false;
        // }
        // if(ans && (odd==1 || odd==0)){
        //     //  cout<<odd<<"=> "<<even<<endl;
        // }else{
        //     ans=false;
        //   //  cout<<ans<<endl;
        // }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


    return 0;
}