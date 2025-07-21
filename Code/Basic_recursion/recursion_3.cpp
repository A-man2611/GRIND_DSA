// Print lineraly from 1 to n
#include<bits/stdc++.h>
using namespace std;

void linear(int i,int n)
{
    if(i<1) return;
    cout<<i<<endl;
    linear(i-1,n);
}

int main()
{
    int i,n;
    cout<<"Enter the value of n:";
    cin>>n;
    linear(n,n);
    return 0;


}
