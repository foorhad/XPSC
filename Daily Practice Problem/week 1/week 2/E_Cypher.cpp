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
        vector<ll>v(n);
        vector<string>str(n);

        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++){
            int num1; 
            cin>>num1>>str[i];
        }
      
        int i=0;
        for(auto st12 : str){
            int x = v[i];
            for(auto j : st12){
                if(j=='D'){
                    if(x==9)x=0;
                    else x++;
                }
                else if(j=='U'){
                    if(x==0)x=9;
                    else x--;
                }
            }
            v[i]=x;
            i++;
        }
        for(auto ans : v)cout<<ans<<" ";
        cout<<nl;

        
    }
    return 0;
}