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
    while (t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(auto &it:v)cin>>it;
        string s;cin>>s;
        vector<vector<int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({s[i]-'0',v[i],i});
        }
        sort(all(vec));
        for(int i=0;i<n;i++){
            for(auto it : vec[i])cout<<it<<" ";
            cout<<nl;
        }
        for(int i=1;i<=n;i++){
            int indx = vec[i-1][2];
            v[indx] = i; 
        }
        for(auto it:v)cout<<it<<" ";
        cout<<nl;
    }
    
    return 0;
}