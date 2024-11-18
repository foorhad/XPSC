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
        int n,cnt1=0,cnt2=0;cin>>n;
        string s;cin>>s;
        char curr = '1';
        for(int i=0;i<n;i++){
            if(s[i]!=curr){
                if(i==0)cnt1++;
                else if(s[i-1]!=s[i])cnt1++;
            }
        }
        curr = '0';
        for(int i=0;i<n;i++){
            if(s[i]!=curr){
                if(i==0)cnt2++;
                else if(s[i-1]!=s[i])cnt2++;
            }
        }
        cout<<min(cnt1,cnt2)<<nl;
        
    }
    
    return 0;
}
