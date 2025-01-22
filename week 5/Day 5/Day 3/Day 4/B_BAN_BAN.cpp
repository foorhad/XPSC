#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
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
    int n; cin>>n;
    vector<pi>v;
    string s; 
    for(int i=1;i<=n;i++){
        s.append("BAN");
    }
    int i=1,j=s.size()-1;


    // swap(s[i],s[j]);
    // cout<<s<<nl;
    
    while (i<j)
    {
        if(i>=j)break;
        v.push_back({i+1,j+1});
        swap(s[i],s[j]);
        i+=3,j-=3;
    }
    cout<<v.size()<<nl;
    for(auto [x,y]:v)cout<<x<<" "<<y<<nl;
    // for(auto i:v)cout<<i.first<<" "<<i.second<<nl;

    
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}