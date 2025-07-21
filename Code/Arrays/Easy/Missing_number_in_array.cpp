#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool arrayMissing(int arr[],int n){
        for(int i=0;i<n-1;i++){ // n-1
            int mis_element=arr[i];
            if((mis_element+1) != arr[i+1]){ // ❌ arr[i+1] goes out of bounds when i == n-1
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<(s.arrayMissing(arr,n) ? "true":"false"); //Fix: Wrap function call in parentheses:
    return 0;
}