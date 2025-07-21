#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void insertingArray(int arr[], int n){
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
        }
        void mappingValuesCount(map<int,int>& mpp, int arr[], int n){
            for(int i = 0; i<n;i++){
                mpp[arr[i]]++;
            }
        }
        void highestLowest(map<int,int>& mpp,int arr[], int n){

            int max_freq =0, min_freq = n;
            int max_ele, min_ele = 0;
            for(auto it : mpp){
                int count = it.second;
                int element = it.first;

                if(count>max_freq){
                    max_ele = element;
                    max_freq = count;
                }
                if(count<min_freq){
                    min_freq = count;
                    min_ele = element;
                }
                
            }
            cout<<"max_ele  "<<max_ele<<" min_ele  "<<min_ele<<" ";
        }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    map<int,int> mpp;
    int arr[n];
    s.insertingArray(arr,n);
    s.mappingValuesCount(mpp,arr,n);
    s.highestLowest(mpp,arr,n);
    return 0;

}