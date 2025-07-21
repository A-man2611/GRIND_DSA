// swapping the array using recursion
#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int n)
{
    cout<<"The reversed Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
// Syntax: array_name.reverse(BidirectionalIterator first, BidirectionalIterator last)
void reverseArray(int arr[], int n)
{
    reverse(arr , arr + n);
}

int main()
{
    int n=5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr,n);
    PrintArray(arr,n);
    return 0;
}