#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
vector<vector<ll>>graph;
vector<ll>vis;
/// number of leaf node in a tree
ll dfs(ll x, ll parent)
{
    ll cnt=0;
    for(auto child: graph[x])
    {
        if(child!=parent)
        {
            cnt+=dfs(child,x);
        }
    }
    if(cnt==0 && graph[x].size()==1)
    {
        cnt++;
    }
    vis[x]+=cnt;
    return cnt;
}

void solve()
{
    ll n,m,a,r,c,b,x,y,d,k,z,g,sl,h,type,f;
//    string s,s1,s2,s3;
    map<ll,ll>mp1,day,mp2;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    string s,t;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i%2==1)
        {
            ar[i]=-1*ar[i];
        }
    }
    ll sum=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        sum+=ar[i];
        if(sum==0)
        {
            cout<<"YES"<<endl;
            return ;
        }
        if(mp[sum]==1)
        {
            cout<<"YES"<<endl;
            return;
        }
        mp[sum]=1;
    }
    cout<<"NO"<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
