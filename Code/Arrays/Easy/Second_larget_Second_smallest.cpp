#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
    public:
        //The most efficient way to sort an array in C++ is by using the std::sort() function from the <algorithm> header.
        //This function uses an optimized sorting algorithm called IntroSort,
        //which is a hybrid of Quicksort, Heapsort, and Insertion Sort.
        void sortingArray(int arr[],int n){
            sort(arr,arr+n);
        }
        void second_Largestsmallest(int arr[],int n){
            int secondMin = arr[1];
            int secondMax = arr[n-2];
            cout<<"second max value: "<<secondMax<<"  "<<"second lowest value: "<<secondMin;
        }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    s.sortingArray(arr,n);
    s.second_Largestsmallest(arr,n);
    return 0;
}