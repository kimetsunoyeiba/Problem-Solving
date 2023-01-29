#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m,a,p,q,r,c,b,x,y;
    string s;
    map<ll,ll>mp;
    set<ll>st;
    vector<ll>v;
    cin>>n;
    if(n%2==1)
        cout<<"YES"<<endl;
    else
    {
        n=n/2;
        while(1)
        {
            if(n%2==1&& n>2)
            {
                cout<<"YES"<<endl;
                break;
            }
            else{
                if(n<=2)
                {
                    break;
                }

            }
            n/=2;

        }
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
