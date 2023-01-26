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
    ll ar[n];
    ll odd=0;
    ll ev=0;
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)ev++;
        else odd++;
    }
    if(odd>=3){
        cout<<"YES"<<endl;
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            if(ar[i]%2==1)
            {
                cout<<i+1<<" ";
                c++;
            }
            if(c==3)
                break;
        }
        cout<<endl;
    }
    else if(odd==2)
    {
        if(ev==1)cout<<"NO"<<endl;
        else if(ev>=2)
        {
            cout<<"YES"<<endl;
            ll c=0;
            for(ll i=0;i<n;i++)
            {
                if(ar[i]%2==0)
                {
                    cout<<i+1<<" ";
                    c++;
                }
                if(c==2)
                    break;
            }
            for(ll i=0;i<n;i++)
            {
                if(ar[i]%2==1)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    else if(odd==1)
    {
        cout<<"YES"<<endl;
        ll c=0;
            for(ll i=0;i<n;i++)
            {
                if(ar[i]%2==0)
                {
                    cout<<i+1<<" ";
                    c++;
                }
                if(c==2)
                    break;
            }
            for(ll i=0;i<n;i++)
            {
                if(ar[i]%2==1)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }

    }
    else
    {
        cout<<"NO"<<endl;
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
