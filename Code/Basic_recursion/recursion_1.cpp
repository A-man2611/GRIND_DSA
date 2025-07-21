#include<bits/stdc++.h>
using namespace std;

// Globally initialize
int cnt = 0;

void print()
{
    // Base condition 
    if(cnt == 3) return;
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main()
{
    print();
return 0;
}