#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define re(i,n) for(ll i = 0 ; i < n ; ++i)
#define ree(n) for(ll i = 0 ; i < n ; i++)
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define mod 1000000007
/*
#ifndef ONLINE_JUDGE
    freopen("input22.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll a[n],v[n+1];
    	rep(i,0,n)
    	{
    		cin>>a[i];
    		v[i]=a[i];
    	}
    	sort(v,v+n);
    	v[n]=v[n-1];
    	ll flag=0;
    	rep(i,0,n)
    	{
    		if(a[i]-v[i]==0||a[i]-v[abs(i-1)]==0||a[i]-v[i+1]==0)
    			continue;
    		else
    		{
    			flag=1;
    			cout<<"NO"<<'\n';
    			break;
    		}
    	}
    	if(flag==0)
    	cout<<"YES"<<'\n';
    }
    return 0;
}