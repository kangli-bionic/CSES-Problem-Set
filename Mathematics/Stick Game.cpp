#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define vll vector<ll>
#define ld long double
#define pll pair<ll,ll>
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define osetll tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ook order_of_key
#define fbo find_by_order
const int MOD=1000000007;
long long int inverse(long long int i){
    if(i==1) return 1;
    return (MOD - ((MOD/i)*inverse(MOD%i))%MOD+MOD)%MOD;
}
ll POW(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll temp=POW(a,b/2);
    if(b%2==0) return (temp*temp)%MOD;
    else return (((temp*temp)%MOD)*a)%MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    ll p[k];
    for(int i=0;i<k;i++)
    {
        cin>>p[i];
    }
    ll dp[n+1]={};
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(i-p[j]>=0 && dp[i-p[j]]==0)
            {
                dp[i]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(dp[i]==1) cout<<"W";
        else cout<<"L";
    }
}
