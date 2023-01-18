#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,a,b,c,x,y,z,p,q,r;
    string s;
    cin>>s;
    map<char,ll>mp,mp1;
    c=0;
    for(ll i=0;i<s.size();i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]==1)
        {
         c++;
        }
    }


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}
