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
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(ar[0]==ar[n-1])cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        ll j=n-1;
        ll k=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)cout<<ar[k++]<<" ";
            else
            {
                cout<<ar[j--]<<" ";
            }
        }
        cout<<endl;
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
