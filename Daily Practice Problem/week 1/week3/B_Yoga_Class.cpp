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
#define fs string::npos //find string in string
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  
void solve(){
    int n,x,y;cin>>n>>x>>y;
    if(n%2==0){
        int even_cnt_x = n*x;
        int even_cnt_y = (n/2)*y;
        if(even_cnt_x > even_cnt_y)cout<<even_cnt_x<<nl;
        else cout<<even_cnt_y<<nl;
    }
    else{
        int even_cnt_x = n*x;
        int even_cnt_y = (((n-1)/2) * y)+x;
        if(even_cnt_x > even_cnt_y)cout<<even_cnt_x<<nl;
        else cout<<even_cnt_y<<nl;
    }
  
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}