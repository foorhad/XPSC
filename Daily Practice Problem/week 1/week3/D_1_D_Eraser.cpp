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
    int n,k,ans=0;cin>>n>>k;
    string s;cin>>s;
    int i=0,l=-1,r=0;
    while(r<n){
        if(l==-1 && s[i]=='B'){
            l=i;
        }
        if(l!=-1 && (r-l)+1==k){
            ans++;
            l=-1;
        }
        i++,r++;
    }
    if(l!=-1)ans++;
    cout<<ans<<nl;
  
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}