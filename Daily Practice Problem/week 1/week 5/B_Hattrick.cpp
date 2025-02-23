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
    char a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    int flag = 0;
    if(a=='W' and b=='W' and c=='W')flag = 1;
    if(b=='W' and c=='W' and d=='W')flag = 1;
    if(c=='W' and d=='W' and e=='W')flag = 1;
    if(d=='W' and e=='W' and f=='W')flag = 1;
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