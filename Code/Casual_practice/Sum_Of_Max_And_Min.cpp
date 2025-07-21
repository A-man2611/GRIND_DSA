#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int findMinMax(int arr[], int n){
            long long mn = arr[0],mx=arr[0];
            for (int i = 1; i < n; i++) {
                mn = min(mn, (long long)arr[i]);
                mx = max(mx, (long long)arr[i]);
            }
            cout<<mx+mn<<endl;
            cout<<mx-mn<<endl;
            return {};
    }
};
int main(){
    int k;
    cin>>k;
    int arr[k];
    //inserting the values in the arrray
    for(int i= 0;i<k;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution s;
    cout<<s.findMinMax(arr,n);
    return 0;
}