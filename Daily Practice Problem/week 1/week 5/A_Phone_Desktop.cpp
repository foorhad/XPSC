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
    int x,y;cin>>x>>y;
    int ans = (y+1)/2, remain=0;
    if(y%2==0){
        remain += (y/2)*7; 
    }
    else{
        remain +=(y/2)*7+11;
    }
    
    if(x<=remain)cout<<ans<<nl;
    else{
        int due = x - remain;
        if(due <= 15)cout<<ans+1<<nl;
        else{
            while(1){
                due-=15;
                ans++;
                if(due<=0)break;
                if(due>0 && due<=15){
                    cout<<ans+1<<nl;
                    break;
                }
            }
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