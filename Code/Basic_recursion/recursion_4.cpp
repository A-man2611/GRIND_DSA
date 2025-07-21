//Sum of first N Natural Numbers
#include<bits/stdc++.h>
using namespace std;
int add(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    return n + add(n-1);
}
int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  cout<<add(n)<<endl;
  return 0;

}