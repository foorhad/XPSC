// C++ program to demonstrate 
// working of string.find()
#include <iostream>
#include <string>
using namespace std;

// Driver code
int main()
{
//   string str = "geeksforgeeks a computer science";
//   string str = "1100000";
//   string str1 = "1100";
  
//   // Find first occurrence of "geeks"
//   size_t found = str.find(str1);
//   if (found != string::npos)
//     cout << "First occurrence is " << 
//              found << endl;
  
//   // Find next occurrence of "geeks".
//   // Note here we pass
//   // "geeks" as C style string.
//   char arr[] = "geeks";
//   found = str.find(arr, found+1);
//   if (found != string::npos)
//     cout << "Next occurrence is " << 
//              found << endl;
string s = "1100000";
if(s.find("1100") != s.end()) cout<<"found";
else cout<<"not  f"<<endl;
  return 0;
}
