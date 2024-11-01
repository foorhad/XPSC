#include <iostream>     // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>      // File streams (for file input/output)
#include <iomanip>      // Input/output manipulators (for formatting)
#include <string>       // String manipulation
#include <sstream>       // StringStream
#include <vector>       // Dynamic arrays
#include <list>         // Doubly linked list
#include <queue>        // Queue data structure
#include <stack>        // Stack data structure
#include <map>          // Associative array (key-value pairs)
#include <set>          // Set data structure
#include <algorithm>    // Standard algorithms (sorting, searching, etc.)
#include <cmath>        // Mathematical functions
#include <ctime>        // Date and time functions
#include <cstdlib>      // Standard library utilities (includes functions like `rand()` and `exit()`)
#include <cstring>      // C-style string functions
#include <cassert>      // Assertions
#include <utility>
#include <limits.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
const ll INF = 1e18+5;
const int N = 1e6+5;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
using namespace std;

int main()
{
 fast();
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        vector<int>fre(26,0);
        for(int i=0;i<s.size();i++){
            fre[int(s[i]-'a')]=1;
        }

        char c;
        for(int i=0;i<26;i++){
            if(fre[i]==0){
                c = char(i+'a');
                break;
            }
        }

        bool flag = 1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1] && flag){
                s.insert(s.begin()+i+1,c);
                flag = 0;
                // break;
            }        
        }
        if(flag==1)s.push_back(c);     
        
        cout<<s<<nl;
    }
    
    return 0;
}