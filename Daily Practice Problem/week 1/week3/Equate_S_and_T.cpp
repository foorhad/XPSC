#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"Yes"<<nl;
#define no cout<<"No"<<nl;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define fs string::npos //find string in string
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  
void solve(){
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    if(s==t){
        yes return;
    }
    int s_a=0,t_a=0;
    for(auto it:s){
        if(it=='a')s_a++;
    }
    for(auto it:t){
        if(it=='a')t_a++;
    }
    if(s_a != t_a){
        no return;
    }

    int s_b=0,t_b=0;
    for(auto it:s){
        if(it=='a')break;
        s_b++;
    }
    for(auto it:t){
        if(it=='a')break;
        t_b++;
    }
    if(s_b == t_b)yes
    else no
  
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}