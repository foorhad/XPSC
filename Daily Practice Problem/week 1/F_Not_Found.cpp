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
    string s;cin>>s;
    vector<int>v(26,-1);
    for(int i=0;i<s.size();i++){
        v[int(s[i]-'a')]=1;
    }
    string ans ="None";
    for(int i=0;i<26;i++){
        if(v[i]==-1){
            ans = char(i+'a');
            break;
        }
    }
    cout<<ans<<nl;
    return 0;
}