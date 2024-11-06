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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto [x,y]:mp){
            pq.push(y);
        }
        while(!pq.empty()){
            if(pq.size()<2)break;
            int x,y;
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            x--,y--;
            if(x>0)pq.push(x);
            if(y>0)pq.push(y);
        }
        int ans =0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<nl;
        
    }

    
    

    return 0;
}