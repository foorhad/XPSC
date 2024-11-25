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
    string s;cin>>s;
    int q;cin>>q;
    set<int>index;
    for(int i=0;i<=s.size()-3;i++){
        if(s.substr(i,4)=="1100"){
            index.insert(i);
            cout<<i<<" ";
        }
    }
    cout<<nl;
    while(q--){
        int idx;char val;
        cin>>idx>>val;
        idx--;
        s[idx]=val;
        if(s.size()<4)no
        else{
            for(int i=idx-3;i<=idx;i++){
                if(i >= 0 && i<=s.size()-4){
                    if(s.substr(i,4)=="1100")index.insert(i);
                    else index.erase(i);
                }
            }
            if(index.empty())no
            else yes
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