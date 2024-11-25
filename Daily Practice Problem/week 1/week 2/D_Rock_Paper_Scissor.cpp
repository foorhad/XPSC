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
    ll t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string chef,chefina;cin>>chef>>chefina;
        int chef1=0, chefina1=0, draw=0;
        for(int i=0;i<n;i++){
            char a=chef[i], b=chefina[i];
            if(a=='R' && b=='S')chef1++;
            else if(a=='S' && b=='R')chefina1++;
            else if(a=='S' && b=='P')chef1++;
            else if(a=='P' && b=='S')chefina1++;
            else if (a=='P' && b=='R')chef1++;
            else if(a=='R' && b=='P')chefina1++; 
            else draw++;
        }
        int op=0;
        if(chef1>chefina1)cout<<0<<nl;
        else if(chefina1>chef1){
            while(1){
                if(chef1>chefina1)break;
                chef1++;
                chefina1--;
                op++;
            }
            cout<<op<<nl;
        }
        else if(chef1==chefina1)cout<<1<<nl;
         
    }
    
    return 0;
}