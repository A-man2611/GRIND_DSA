// Print name N times using recursion
#include<bits/stdc++.h>
using namespace std; 

void Name(int i,int n){
    //base condition 
    if(i>n) return;
    
    cout<<"Incognito_shot"<<endl;
    Name(i+1,n);
}

int main()
{
   
    int n = 4;
    Name(1,n);
    return 0;
}

