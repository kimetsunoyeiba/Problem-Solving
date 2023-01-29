#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m,a,p,q,r,c,b,x,y;
    string s;
    map<ll,ll>mp1,mp2;
    set<ll>st;
    vector<ll>v;
    ll k;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<1<<endl;
    }
    else if(b%a==0)
    {
        cout<<b/a<<endl;
    }
    else if(a>b)
    {
        cout<<2<<endl;
    }
    else
    {
        ll x=b/a;
        if(b%a)x++;
        cout<<x<<endl;
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
