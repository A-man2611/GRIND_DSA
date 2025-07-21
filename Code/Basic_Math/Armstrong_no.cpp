#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution{
    public:
        bool Armstrong(int num){
            int original = num;
            int n = to_string(abs(num)).length();
            int sum = 0;
        while(num > 0){
            int digit = num %10;
            sum += pow(digit,n);
            num /=10;
        }
        cout<< sum<<endl;
        return sum == original;                   
    }
};

int main()
{
    Solution s;
    int num = 153;
    
    long int a = s.Armstrong(num);
    cout << a <<endl;
    return 0;
}