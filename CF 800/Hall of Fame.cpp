#include<bits/stdc++.h>
using namespace std;
#define ll long long int
    vector<ll>v;
void solve()
{
    ll a,b,c,n,flag,p,q,r,m;
    ll sum=0;
    ll cnt=0;
    string s;
    map<ll,ll>mp;
    ll f,g,w,d,h;
    cin>>n;
    cin>>s;
    a=b=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='L')a++;
        else b++;
    }
    if(a==n|| b==n)cout<<-1<<endl;
    else
    {
        flag=0;
        ll pos=-1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                pos=i;
                break;
            }
        }
        cout<<abs(0-pos)<<endl;
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
