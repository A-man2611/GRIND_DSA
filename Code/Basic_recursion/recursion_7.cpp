// Check if the given String is Palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool f(int i , string &s)
{
    if(i>= s.size()/2) return true;
    if (s[i] != s[s.size()-i-1]) return false;
    return f(i+1 , s);
}
int main()

{
    string s = "MADAM";
    cout<< f(0,s);
    return 0;
}




///////////////BAsIC WAY


// #include<bits/stdc++.h>

// using namespace std;

// bool isPalindrome(string s) {

//         int left = 0, right = s.length()-1;
//         while(left<right)
//         {
//             if(!isalnum(s[left])) 
//                 left++;
//             else if(!isalnum(s[right])) 
//                 right--;
//             else if(tolower(s[left])!=tolower(s[right])) 
//                 return false;
//             else {
//                 left++; 
//                 right--;
//             }
//         }
//         return true;

// }
// int main() {

//   string str = "ABCDCBA";
//   bool ans = isPalindrome(str);

//   if (ans == true) {
//     cout << "Palindrome";
//   } else {
//     cout << "Not Palindrome";
//   }
//   return 0;
// }
