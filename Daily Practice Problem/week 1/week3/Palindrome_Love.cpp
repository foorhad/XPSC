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
  
bool is_palindrome(string s){
    int i=0, j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j])return false;
        i++;j--;
    }
    return true;
} 

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    if(n==2){
        if(s[0]==s[n-1])cout<<0<<nl;
        else cout<<-1<<nl;
    }
    else if(s[0]!=s[n-1]){
        if(is_palindrome(s.substr(0,n-1)) && is_palindrome(s.substr(1,n-1))){
            cout<<-1<<nl;
        }
        else cout<<1<<nl;
    }
    else{
       int i=1,j=n-2;
       while (i<=j){
        if(s[i]!=s[j]){
            cout<<1<<nl;
            return;
        }
        i++,j--;
       }
       cout<<0<<nl;
    }
    
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}