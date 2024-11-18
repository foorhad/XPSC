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
    int n;cin>>n;
    int v[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            cin>>v[i][j];
        }
    }
    map<int,int>mp;
    map<int,int>idx;
    for(int i=1;i<=n;i++){
        idx[v[i][n-1]]=i;
        mp[v[i][n-1]]++;
    }
    int unique_val, nonUnique_val;
    for(auto [x,y]:mp){
        if(y==1)unique_val=x;
        else nonUnique_val=x;
    }
    int unique_idx = idx[unique_val];
    for(int i=1;i<n;i++){
        cout<< v[unique_idx][i]<<" ";
    }
    cout<<nonUnique_val<<nl;

 
  
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}