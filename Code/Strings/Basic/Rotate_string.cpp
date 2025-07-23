#include<iostream>
#include<string>

using namespace std;

class Solution{
    public:
        /** explained:**
(s + s).find(goal) != string::npos

- `s + s` creates a new string by concatenating `s` with itself.
- `.find(goal)` checks if the string `goal` appears as a substring in `s + s`.
- `string::npos` is a constant meaning "not found".

**Why does this work?**  
If `goal` is a rotation of `s`, then `goal` will always appear somewhere inside `s + s`.  
If not, it won't.

**Example:**  
`s = "abcde"`, `goal = "cdeab"`  
`s + s = "abcdeabcde"`  
`"cdeab"` is a substring of `"abcdeabcde"` → returns `true`.

**In summary:**  
This is a quick and efficient way to check if `goal` is a rotation of `s`.
**/
        bool rotateString(string s, string goal){     
        return (s.length()==goal.length() && (s+s).find(goal) != string::npos);
        }

        //way 2 - there is a funtion as rotate 
        bool rotatestring2(string s, string goal){
            int m = s.size();
            int n = goal.size();
            if(m==n){
                for(int i=0;i<m;i++){
                    rotate(s.begin(),s.begin()+1,s.end());
                    if(s==goal) return true;
                }
            }
            return false;
        }
};
int main(){
    string s,goal;
    cin>>s;
    cin>>goal;
    Solution s1;
    cout<<"Value of first function: "<<s1.rotateString(s,goal);
    cout<<endl;
    cout<<"Value of second function: "<<s1.rotatestring2(s,goal);
    return 0;

}