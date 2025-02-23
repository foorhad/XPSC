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

int check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}  

void print_ON_and_OFF_bits(int n){
    for(int k=30;k>0;k--){
        if(check_kth_bit_on_or_off(n,k))cout<<1<<" ";
        else cout<<0<<" ";
    }
}

int turn_ON_kth_bit(int n, int k){
    return (n | (1<<k));
}

int turn_OF_Kth_bit(int n, int k){
    return (n & ~(1<<k));
}

int toggle_Kth_bit(int n, int k){
    return (n ^ (1<<k));
}
void solve(){
    // cout<<check_kth_bit_on_or_off(11,3)<<nl;
    // print_ON_and_OFF_bits(11);
    // cout<<turn_ON_kth_bit(45,1);
    // cout<<turn_OF_Kth_bit(45,5);
    cout<<toggle_Kth_bit(11,3)<<nl;
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}