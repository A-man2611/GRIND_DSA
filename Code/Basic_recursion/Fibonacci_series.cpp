#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int Fibonacci_series(vector<int> a, int fib){
            if(fib <= 1) return fib;
            a[0] = 0;
            a[1] = 1;

            for(int i = 2; i <= fib; i++) {
                a[i] = a[i - 1] + a[i - 2];
            }

        return a[fib];
    }

        void printVector(vector<int> &a)
        {
            for(int i : a){
                cout<<a[i]<<" ";
            }
        }
};

int main()
{
    vector<int> a;
    int fib;
    cin>>fib;
    Solution s;
    s.Fibonacci_series(a,fib);
    s.printVector(a);
    return 0;
}
