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
    cin>>w>>d>>h;
    cin>>a>>b>>f>>g;
    cout<<h+min({b+g+abs(a-f),abs(d-b)+abs(d-g)+(abs(a-f)),a+f+abs(g-b),(w-a)+(w-f)+abs(g-b)})<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
