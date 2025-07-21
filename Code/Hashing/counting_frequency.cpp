#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void Array_fetching(int arr[], int n){
            for(int i = 0; i<n;i++){
                cin>>arr[i];
            }
        }

        void Counting_Frequency(map<int,int>& mpp, int arr[], int n){
            for(int i=0;i<n;i++){
                mpp[arr[i]]++;
            }
        }

        void Value_print(map<int,int>& mpp)
        {
            int q,number;
            cin>>q;

            while(q--){
                cin>>number;
                cout<<mpp[number]<<endl;
            }
        }
        
};

int main(){
    Solution s;
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    s.Array_fetching(arr,n);
    s.Counting_Frequency(mpp,arr,n);    //hashing
    s.Value_print(mpp);
    return 0;
}