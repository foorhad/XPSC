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
    int n;cin>>n;
    if(n%2==0)cout<<-1;
    else{
        vector<int>v(n,0);
        int j=1;
        for(int i=0;i<n;i+=2){
            v[i] = j;
            j+=2;
        }
        int k=n-1;
        for(int i=1;i<n;i+=2){
            v[i] = k;
            k-=2;
        }
        for(auto i:v)cout<<i<<" ";
    }
    cout<<nl;
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}