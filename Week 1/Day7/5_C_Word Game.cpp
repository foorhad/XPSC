#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const long long int INF = 1e18 + 5;
const int N = 1e6 + 5;
#define mem0(X) memset(X, 0, sizeof(X))
#define mem1(X) memset(X, 1, sizeof(X))
#define memMin1(X) memset(X, -1, sizeof(X))
using namespace std;

int main()
{
    fast();
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        set<string> per1;
        for (int i = 0; i < n; i++){
            string s;cin >> s;
            per1.insert(s);
        }
        set<string> per2;
        for (int i = 0; i < n; i++){
            string s;cin >> s;
            per2.insert(s);
        }
        set<string> per3;
        for (int i = 0; i < n; i++){
            string s;cin >> s;
            per3.insert(s);
        }
        int cnt_ans1=0, cnt_ans2=0, cnt_ans3=0;

        for(auto x : per1){
            bool  b=false, c=false;
            if(per2.find(x) != per2.end()){
                b=true;
                per2.erase(x);
            }
            if(per3.find(x) != per3.end()){
                c=true;
                per3.erase(x);
            }
            if(b==false && c==false)cnt_ans1+=3;
            else if(b==true && c==true)cnt_ans1+=0;
            else if(b)cnt_ans2+=1,cnt_ans1+=1;    
            else if(c)cnt_ans3+=1,cnt_ans1+=1;    
        }
        for(auto x : per2){
            bool  a=false, c=false;
            if(per1.find(x) != per1.end()){
                a=true;
                per1.erase(x);
            }
            if(per3.find(x) != per3.end()){
                c=true;
                per3.erase(x);
            }
            if(a==false && c==false)cnt_ans2+=3;
            else if(a==true && c==true)cnt_ans2+=0;
            else if(a)cnt_ans1+=1,cnt_ans2+=1;    
            else if(c)cnt_ans3+=1,cnt_ans2+=1;    
        }
        for(auto x : per3){
            bool  a=false, b=false;
            if(per1.find(x) != per1.end()){
                a=true;
                per1.erase(x);
            }
            if(per2.find(x) != per2.end()){
                b=true;
                per2.erase(x);
            }
            if(a==false && b==false)cnt_ans3+=3;
            else if(a==true && b==true)cnt_ans3+=0;
            else if(a)cnt_ans1+=1,cnt_ans3+=1;    
            else if(b)cnt_ans2+=1,cnt_ans3+=1;   
        }
        cout<<cnt_ans1<<" "<<cnt_ans2<<" "<<cnt_ans3<<nl;
        
    }

    return 0;
}