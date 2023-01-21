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
    for(ll i=1;i<=n;i++)
    {
        sum=((sum)%1000000007)*(i%1000000007);

//        cout<<sum<<endl;
    }
    cnt=0;
    for(ll i=n;i>=1;i--)
    {
        cnt=cnt+((i-1)*2)%1000000007;
    }
//    cout<<cnt<<" "<<sum<<endl;
    cout<<((sum)%1000000007*(cnt%1000000007))%1000000007<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
