#include<bits/stdc++.h>
using namespace std;

// Solution1: Sorting
// We can sort the array in ascending order, hence the largest element will be at the last index of the array. 

// Solution2: Using a max variable
// We can maintain a max variable that will update whenever the current value is greater than the value in the max variable.  

class Solution{
    public:
        int largestElement(int arr[], int n){
            int max_ele = 0;
            for(int i = 0; i<n;i++){ //kind of sliding window technique
                if(arr[i]<arr[i+1]){
                    max_ele = arr[i+1];
                }
            }
            return max_ele;
        }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    int arr[n];

    //Inserting the value inside the array
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<s.largestElement(arr,n)<<endl;
    return 0;
}