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
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;

int check_kth_bit_on_off(int n, int k){
    return (n>>k)&1;
}  

void print_on_and_of_bit(int n){
    for(int k=0;k<=30;k++){
        if(check_kth_bit_on_off(n,k))cout<<1<<" ";
        else cout<<0<<" ";
    }
}
int turn_on_kth_bit(int n, int k){
    return ((1<<k) | n);
}
int turn_of_kth_bit(int n, int k){
    return (n & (~(1<<k)));
}
int  toggle_kth_bit(int n, int k){
    return (n ^ (1<<k));
}
  
void solve(){
    // cout<<check_kth_bit_on_off(6,3)<<nl;
    // print_on_and_of_bit(6);
    // cout<<turn_on_kth_bit(6,4)<<nl;
    // cout<<turn_of_kth_bit(6,1)<<nl;
    cout<<toggle_kth_bit(6,3)<<nl;
    
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}