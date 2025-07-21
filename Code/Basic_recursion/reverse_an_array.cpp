#include<iostream>
using namespace std;

class Solution{
    public:
        void Rev_array(int arr[], int length)
        {
            int str_ptr=0;
            int end_ptr = length-1;
            while(str_ptr<end_ptr)
            {
                swap(arr[str_ptr],arr[end_ptr]);
                str_ptr++;
                end_ptr--;
            }
        }
        void Print_array(int arr[],int length)
        {
            for(int i=0;i<length;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    Solution s;
    s.Rev_array(arr,length);
    s.Print_array(arr,length);
    return 0;
}