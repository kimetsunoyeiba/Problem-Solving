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
    cin>>n>>k;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll sum=0;
    ll pref=ar[0];
    for(ll i=1;i<n;i++)
    {
        if(ar[i]*100>k*pref)
        {
            ll x=((ar[i]*100)/k);
            if((ar[i]*100)%k)x++;
            sum=sum+x-pref;
            pref=x;

        }
        pref+=ar[i];
    }
    cout<<sum<<endl;


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
