//factorial code 
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int main()
{   
    int n;
    cout<<"Enter the value of the factorial to be find:";
    cin>>n;
    cout<<endl;
    cout<<"The value is:"<<fact(n)<<endl;
}