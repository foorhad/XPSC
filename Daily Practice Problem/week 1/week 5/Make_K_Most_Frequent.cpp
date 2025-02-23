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
  
bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.second < b.second;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n),cnt(21);

    cout<<nl;
    int z = 'I';
    cout<<"z: "<<z<<nl;
    cout<<nl;

    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    int mx = *max_element(all(cnt))<<nl;
    if(mx==k){
        cout<<0<<nl;
        return;
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