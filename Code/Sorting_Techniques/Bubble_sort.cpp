 #include <iostream>
 using namespace std;

 class Solution{
    public:
        void bubbleSort(int arr[], int n){
            int didswap = 0;
            for(int i = n-1;i>=0;i--) //Each iteration of i represents a pass through the array.
            {
                for(int j=0;j<=i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int temp = arr[j+1];
                        arr[j+1] = arr[j];
                        arr[j] = temp;
                        didswap = 1;
                    }
                }
                if(didswap==0){
                    break;
                }
            }
        }
 };
 int main()
 {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    s.bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

 }