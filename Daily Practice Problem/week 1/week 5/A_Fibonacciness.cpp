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
    int a,b,c,d,e;cin>>a>>b>>d>>e;
    c = a+b;
    int sum = 0;
    if(a+b == c)sum++;
    if(b+c == d)sum++;
    if(c+d == e)sum++;

    c = d-b;
    int sum1 = 0;
    if(a+b == c)sum1++;
    if(b+c == d)sum1++;
    if(c+d == e)sum1++;

    cout<<max(sum,sum1)<<nl;
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}