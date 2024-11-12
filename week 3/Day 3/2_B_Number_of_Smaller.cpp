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
    int n,m;cin>>n>>m;
    vector<ll>a(n),b(m),ans;
    for(auto &it : a)cin>>it;
    for(auto &it : b)cin>>it;
  
    int i=0,j=0,cnt = 0;
    while(1){
        if(j>=m)break;
        if(i<n && a[i]<b[j]){
            cnt++;i++;
        }
        else{
            ans.push_back(cnt);
            j++;
        }
    }
    for(int i=0;i<m;i++)cout<<ans[i]<<" ";
}
  
  
int main()
{
fast();
    // int t=1;cin>>t;
    // while(t--)solve();
    solve();
    return 0;
}