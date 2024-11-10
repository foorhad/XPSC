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
        int n;cin>>n;
        string s;cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='a' && s[i+1]=='b')cnt1++;
            if(s[i]=='b' && s[i+1]=='a')cnt2++;
        }
        if(cnt1==cnt2)cout<<n<<nl;
        else{
            char first=s[0], sec=s[n-1];
            int sz1 = n,sz2=n;
            for(int i=0;i<n;i++){
                if(s[i]!=first)break;
                sz1--;
            }
            for(int i=n-1;i>=0;i--){
                if(s[i]!=sec)break;
                sz2--;
            }
            cout<<max(sz1,sz2)<<nl;
        }
        
    }
    
    return 0;
}