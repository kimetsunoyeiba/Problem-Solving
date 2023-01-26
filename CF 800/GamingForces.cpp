
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b,c,n,flag,p,q,r,m;
    ll sum1=0;
    ll cnt=0;
    string s;
    map<ll,ll>mp;
    ll f,g,w,d,h;
    vector<ll>v;
    set<ll>st;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    ll ans=n;
    sort(ar,ar+n);
    a=0;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            a++;
        }
    }
    if(a<=0)
    {
        cout<<n<<endl;
    }
    else
    {
        sum1=a/2;
        if(a%2)sum1++;
        cout<<n-(a)+sum1<<endl;
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
