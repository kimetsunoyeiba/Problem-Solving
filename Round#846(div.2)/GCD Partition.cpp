
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
        sum1+=ar[i];
    }
    ll sum2=0;
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        sum2+=ar[i];
        sum1-=ar[i];
//        cout<<sum1<<" "<<sum2<<endl;
        ans=max(ans,(__gcd(sum1,sum2)));
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
