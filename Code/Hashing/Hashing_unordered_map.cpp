#include<bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //pre-compute

    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;

        //explaination:
        // arr = [1, 2, 4, 1, 3, 3, 2]
        // arr[0] == 1;
        // mpp[1]++ == current value map ki 1 hai use 1 se increment krdo simple as that 

    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch

        cout<<mpp[number]<<endl;
    }

    // just itrate the map 
    for(auto it : mpp){
        cout<<it.first<<" -> " <<it.second<<endl; 
    }

    return 0;
}