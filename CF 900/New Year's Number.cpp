#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m,a,p,q,r,c,b,x,y;
    string s;
    map<ll,ll>mp;
    set<ll>st;
    vector<ll>v;
    cin>>n;
    ll rem=n;
    if(n%2020==0)
    {
        cout<<"YES"<<endl;
    }
    else if(n%2021==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
     while(rem>0)
     {
         if(rem%2021==0)
         {
             cout<<"YES"<<endl;
             return;
         }
         rem=rem-2020;
     }
     cout<<"NO"<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
