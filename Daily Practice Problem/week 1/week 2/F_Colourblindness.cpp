#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define fs string::npos //find string in string
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;


int main()
{
 fast();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s1,s2;cin>>s1>>s2;
        bool f=true;
        for(int i=0;i<n;i++){
            if((s1[i]=='G' && s2[i]=='R') || (s1[i]=='R' && s2[i]=='G')){
                f=false;break;
            }
            else if((s1[i]=='B' && s2[i]=='R') || (s1[i]=='R' && s2[i]=='B')){
                f=false;break;
            }
        }
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}