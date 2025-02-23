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
  
  
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string a = "RGB";
    string b = "RBG";
    string c = "GRB";
    string d = "GBR";
    string e = "BRG";
    string f = "BGR";

    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    int cnt4=0;
    int cnt5=0;
    int cnt6=0;

    int j=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(s[i]!=a[j])cnt1++;
        if(s[i]!=b[j])cnt2++;
        if(s[i]!=c[j])cnt3++;
        if(s[i]!=d[j])cnt4++;
        if(s[i]!=e[j])cnt5++;
        if(s[i]!=f[j])cnt6++;
        j++;
        if(j==3)j=0;
    }

    cout<<min({cnt1,cnt2,cnt3,cnt4,cnt5,cnt6})<<nl;
    
  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}