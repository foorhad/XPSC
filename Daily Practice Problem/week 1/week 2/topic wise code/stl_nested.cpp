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
    map<set<int>,int>mp;
    set<int>s;
    set<int>s1;
    s1.insert(9);
    s1.insert(12);
    s1.insert(11);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
 
    mp[s]=5;
    mp[s1]=6;

    for(auto [x,y] : mp){
        for(auto value : x)cout<<value<<" ";
        cout<<nl;
    }
    return 0;
}