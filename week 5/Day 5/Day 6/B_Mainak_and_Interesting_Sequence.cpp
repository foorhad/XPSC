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
    ll n,x;cin>>n>>x;
    if(n>x || (n%2==0 and x%2==1)) no
    else{
        yes
        if(n%2==0){
            ll m = n-2;
            for(int i=1;i<=m;i++){
                cout<<1<<" ";
            }
            int val = x-m;
            cout<<val/2<<" "<<val/2<<nl;
        }
        else
        {
            ll m = n-1;
            for(int i=1;i<=m;i++){
                cout<<1<<" ";
            }
            ll val = x-m;
            cout<<val<<nl;
        }
        
    }
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}