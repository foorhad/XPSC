#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  
void solve(){
    ll n,a,b;cin>>n>>a>>b;
    int flag = 1;

    ll ans1a = a*1, ans1b=b+1;
    if(ans1a>n or ans1b>n)flag=0;

    ll ans2a = ans1a*a, ans2b=ans1a+b;
    if(ans2a>n or ans2b>n)flag=0;

    ll ans3a =  ans2b*a, ans3b= ans2b+b;
    if(ans3a>n or ans3b>n)flag=0;

    if(flag)yes
    else no
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}