#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b,c,n,flag,p,q,r,m;
    ll sum=1;
    ll cnt=0;
    string s;
    map<ll,ll>mp;
    ll f,g,w,d,h;
    vector<ll>v;
    set<ll>st;
    cin>>n;
    if(n%2==0)
    {
        cout<<"YES"<<endl;
        for(ll i=1;i<=n;i++)
        {
            if(i%2==0)cout<<1<<" ";
            else cout<<-1<<" ";
        }
        cout<<endl;
    }
    else
    {
        if(n==3)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
           a=n/2;
           b=a-1;
           a=-a;
           for(ll i=1;i<=n;i++)
           {
               if(i%2==1)cout<<b<<" ";
               else cout<<a<<" ";
           }
           cout<<endl;

        }
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
