#include<iostream>
using namespace std;

class Solution
{
    public:
        int factorial(int num)
        {
            if(num<=1)
            {
                return 1;
            }
            return num * factorial(num-1);
        }
};

int main()
{
    int num;
    cin>>num;
    Solution s;
    cout<<s.factorial(num);
    return 0;
}