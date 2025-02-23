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
    float n;cin>>n;
    int marks=0;
    for(int i=0;i<n;i++){
        int x ;cin>>x;
        marks += x;
    }
    
    float result = 0.5 *((n*100)+100);
    int needed_mark = result - marks;
    if(marks >= result)cout<<0<<nl;
    else if(needed_mark > 100)cout<<-1<<nl;
    else cout<<needed_mark<<nl;
    
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}