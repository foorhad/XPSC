#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;


int main()
{
 fast();
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        vector<int>cap,sma;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                if(!cap.empty()){
                    s[cap.back()]='#';
                    cap.pop_back();
                }
            }
            else if(s[i]=='b'){
                if(!sma.empty()){
                    s[sma.back()]='#';
                    sma.pop_back();
                }
            }
            else if(s[i]>='A' && s[i]<='Z'){
                cap.push_back(i);
            }
            else if(s[i]>='a' && s[i]<='z'){
                sma.push_back(i);
            }
        }
        for(char c : s){
            if(c!='#' && c!='B' && c!='b'){
                cout<<c;
            }
        }
        cout<<nl;
    }
    return 0;
}