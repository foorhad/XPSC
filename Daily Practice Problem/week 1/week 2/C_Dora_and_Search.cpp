#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
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
        vector<int>v(n+1);
        set<int>s;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }

        int i=1,j=n;
        while(1){
            bool f=false;
            int l=*s.begin(), r=*s.rbegin();
            if(l == v[i] || r == v[i]){
                s.erase(v[i]);
                i++;
                f=true;
            }
            else if(l == v[j] || r == v[j]){
                s.erase(v[j]);
                j--;
                f=true;
            }
            if(f==false || i>j){
                break;
            }
        }
        if(i>j)cout<<-1<<nl;
        else cout<<i<<" "<<j<<nl;
    }
   
    return 0;
}