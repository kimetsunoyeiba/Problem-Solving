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
    cin>>a>>b>>k;
    ll ar[k];
    ll br[k];
    for(ll i=0;i<k;i++)
    {
        cin>>ar[i];
        mp1[ar[i]]++;
    }
    for(ll i=0;i<k;i++)
    {
        cin>>br[i];
        mp2[br[i]]++;
    }
    ll sum=0;
    for(ll i=0;i<k;i++)
    {
        sum=sum+(k-(mp1[ar[i]]+mp2[br[i]])+1);
    }
    cout<<sum/2<<endl;


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
