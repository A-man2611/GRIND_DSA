#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution{
    public:
        void unionMap(int arr1[], int arr2[], int a1, int a2){
            map<int,int> mpp;
            
            for(int i=0; i<a1;i++){//logk
                mpp[arr1[i]]++;
            }                                   //== nlogk 
            for(int i=0; i<a2;i++){//logk
                mpp[arr2[i]]++;
            }
            for(auto it:mpp){
                cout<<it.first<<" "; //k
            }
        } //-------------- nlogk + k

        void setUnion(int arr1[],int arr2[],int a1, int a2){ //O((m+n)log(m+n)) 
            set<int> s;
            for(int i=0;i<a1;i++){
                s.insert(arr1[i]);
            }
            for(int i=0; i<a2; i++){
                s.insert(arr2[i]);
            }
            for(auto it : s){
                cout<<it<<" ";
            }
        }
};

int main()
{
    int a1,a2;
    cin>>a1;//size of the array
    cin>>a2;//size of the array
    int arr1[a1];
    int arr2[a2];

    //inserting values to the array
    for(int i=0;i<a1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<a2;i++){
        cin>>arr2[i];
    }

    Solution s;
    s.unionMap(arr1,arr2,a1,a2);
    s.setUnion(arr1,arr2,a1,a2);
    return 0;
}