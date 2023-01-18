#include<bits/stdc++.h>
using namespace std;
#define ll long long int
    vector<ll>v;
void solve()
{
    ll a,b,c,n,flag,p,q,r;
    ll sum=0;
    ll cnt=0;
    string s;
    cin>>n;
    flag=-1;
    ll pos=-1;
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]==n)
        {
            cout<<i<<endl;
            return;
        }
        else if(v[i]>n)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    {
        if(v[pos]==n+1)
        {
            cout<<pos+1<<endl;
        }
        else{
            cout<<pos<<endl;
        }
    }

}
int main()
{
    ll t;
    v.push_back(0);
    for(ll i=1;i<=1100000;i++)
    {
        v.push_back(v[i-1]+i);
    }
    cin>>t;
    while(t--)
        solve();
    return 0;
}
