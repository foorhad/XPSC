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
  
  
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int in_case_one = 0;
    int in_case_zero = 0;
    char curr_one = '1';
    char curr_zero = '0';
    if(s[0]=='1')in_case_one++;
    for(int i=1;i<n;i++){
        if(s[i]=='1' && s[i-1]!='1')in_case_one++;
    }

    if(s[0]==curr_zero)in_case_zero++;
    for(int i=1;i<n;i++){
        if(s[i]==curr_zero && s[i-1]!=curr_zero)in_case_zero++;
    }
    cout<<min(in_case_one,in_case_zero)<<nl;
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}