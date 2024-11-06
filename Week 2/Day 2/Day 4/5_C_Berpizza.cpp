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
    int n,customer=1;cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int type;cin>>type;
        if(type==1){
            int money;cin>>money;
            s.insert({customer,money});
            ml.insert({money,-customer});
            customer++;
        }
        else if(type==2){
            int pos,taka;
            pos = s.begin()->first, taka=s.begin()->second; 
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({taka,-pos});
        }
        else{
            int pos,taka;
            taka = ml.rbegin()->first, pos=-ml.rbegin()->second;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,taka});
        }
    }
    for(auto indx:ans)cout<<indx<<" ";
    return 0;
}
