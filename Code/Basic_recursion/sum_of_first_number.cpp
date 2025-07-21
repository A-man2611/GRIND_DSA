#include<iostream>
using namespace std;

class Solution{
    public:
        void Sum_first_number(int i , int sum)
        {
            if(i<1)
            {
                cout<<sum<<"";
                return;
            }
            Sum_first_number(i-1,sum+i);
        }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    s.Sum_first_number(n,0);
    return 0;
}