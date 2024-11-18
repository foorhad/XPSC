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
int n,m;
ll sum, primary_diagonal_sum;
int grid[205][205];
 
void s(int r,int c){
    ll ans = primary_diagonal_sum;
    int i=r,j=c;
    i--;j++;
    while(i>=1 && j<=m ){
        ans += grid[i][j];
        i--;j++;
    }
    i=r,j=c;
    i++;j--;
    while(i<=n && j>=1 ){
        ans += grid[i][j];
        i++;j--;
    }
    sum= max(sum,ans);  
}
 
void s1(int r,int c){
  
    ll ans=grid[r][c];
    int i=r,j=c;
    i--;j++;
    while(i>=1 && j<=m ){
        ans += grid[i][j];
        i--;j++;
    }
 
 
    i=r,j=c;
    i++;j--;
    while(i<=n && j>=1 ){
        ans += grid[i][j];
        i++;j--;
    }
  
    i=r,j=c;
    i--;j--;
    while(i>=1 && j>=1){
        ans+=grid[i][j];
        i--;j--;
    }

    i=r,j=c;
    i++;j++;
    while(i<=n && j<=m){
        ans+=grid[i][j];
        i++;j++;
    }
    sum= max(sum,ans); 
}
  
void solve(){
    cin>>n>>m;
    primary_diagonal_sum=0;
    sum = INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
            if(i==j)primary_diagonal_sum+=grid[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==j){
                s(i,j);
            }
            else s1(i,j);
        }
    }
    cout<<sum<<nl;
}
    
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}