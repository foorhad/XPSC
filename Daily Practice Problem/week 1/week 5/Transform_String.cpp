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
    string s,s1;cin>>s>>s1;
    int n = s.size(), n1=s1.size()-1;
    vector<int>v(n);
    for(int i=n-1;i>=0;i--){
        if(s[i]==s1[n1]){
            n1--;
            v[i]=1;
            // if(n1==-1)break;
        }
        if(n1==-1)break;
    }
    if(n1!=-1){
        cout<<-1<<nl;
        return;
    }
    // for(auto i:v)cout<<i<<" ";
    // cout<<nl;
    ll cost = 1, res = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0)res+=cost;
        else cost++;
    }
    cout<<res<<nl;
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}