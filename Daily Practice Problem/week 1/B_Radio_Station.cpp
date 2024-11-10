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
    int n,m;cin>>n>>m;

    vector<pair<string,string>>ser1(n);
    vector<pair<string,string>>com1(m);
   for(int i=0;i<n;i++){
        string command,ip;cin>>command>>ip;
        ip.push_back(';');
        ser1[i]={command,ip};
    }
    for(int j=0;j<m;j++){
        string server,ip1;cin>>server>>ip1;
        com1[j]={server,ip1};
    }
    for(auto x : com1){
        for(auto a:ser1){
            if(x.second==a.second){
                cout<<x.first<<" "<<x.second<<" #"<<a.first<<nl;
            }
        }
    }
    
   

    return 0;
}