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
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int q;cin>>q;
        while(q--){
            int i;cin>>i;
            i-=1;
            char v;cin>>v;
            s[i]=v;
            if(s.find("1100") != string::npos)cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
    }
    
    return 0;
}