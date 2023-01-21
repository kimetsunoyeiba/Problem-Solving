#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b,c,n,flag,p,q,r,m;
    ll sum=0;
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
    a=b=0;
    sum=0;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            if(b!=0)
            {
                sum=sum+(b-1);
                b=0;
            }
            a++;
        }
        else
        {
            if(a!=0)
            {
                sum=sum+a-1;
                a=0;
            }
            b++;
        }
    }
    if(a!=0)sum=sum+(a-1);
    if(b!=0)sum=sum+(b-1);
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
