#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;


int main()
{
 fast();
    int n;cin>>n;
    map<string,string>ans,has;
    for(int i=0;i<n;i++){
        string s1,s2;cin>>s1>>s2;
        if(has.find(s1) != has.end()){
            string s = has[s1];
            ans[s] = s2;
            has.erase(s1);
            has[s2]=s;
        }
        else{
            ans[s1]=s2;
            has[s2]=s1;
        }        
    }
    cout<<ans.size()<<nl;
    for(auto [x,y] : ans){
        cout<<x<<" "<<y<<nl;
    }
    
    return 0;
}