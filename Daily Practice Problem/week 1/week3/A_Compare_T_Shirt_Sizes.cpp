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
    string a,b;cin>>a>>b;
    if(a.back()!=b.back()){
        if(a.back()=='L')cout<<'>'<<nl;
        else if(b.back()=='L')cout<<'<'<<nl;
        else if(a.back()=='M')cout<<'>'<<nl;
        else if(b.back()=='M')cout<<'<'<<nl;
        else cout<<'<'<<nl;
    }
    else{
        int a_x=0, b_x=0;
        for(auto i:a){
            if(i=='X')a_x++;
        }
        for(auto i:b){
            if(i=='X')b_x++;
        }
        if(a.back()=='S'){
            if(a_x>b_x)cout<<'<'<<nl;
            else if(a_x<b_x)cout<<'>'<<nl;
            else cout<<'='<<nl;
        }
        else if(a.back()=='L'){
            if(a_x>b_x)cout<<'>'<<nl;
            else if(a_x<b_x)cout<<'<'<<nl;
            else cout<<'='<<nl;
        }
        else if(a.back()=='M'){
            if(a_x>b_x)cout<<'>'<<nl;
            else if(a_x<b_x)cout<<'<'<<nl;
            else cout<<'='<<nl;
        }
    }

}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}