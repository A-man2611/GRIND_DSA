#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotateArrayBy1(int arr[], int n){
        int first_ele = arr[0]; 
        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = first_ele;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    int arr[n];
    //inserting the value
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    s.rotateArrayBy1(arr,n);
    return 0;
}