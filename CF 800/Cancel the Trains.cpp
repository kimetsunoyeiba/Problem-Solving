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
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>a;
        mp[a]++;
        if(mp[a]>1)cnt++;
    }
    cout<<cnt<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
