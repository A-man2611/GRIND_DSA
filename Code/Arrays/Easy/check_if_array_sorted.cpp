#include<iostream>
using namespace std;

class Solution{
    public:
    bool sortedArray(int arr[], int n)
    {
        for(int i=0;i<n-1;i++)
        { // you need to make this n-1 as due to i+1 it makes access memory out of bounds
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<(s.sortedArray(arr,n) ? "true" : "false")<<endl; //ternary operator
    return 0;
}