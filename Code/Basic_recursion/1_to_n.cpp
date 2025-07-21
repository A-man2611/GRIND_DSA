#include <iostream>
using namespace std;
class Solution{
    public:
        void ntimes(int i, int num){
            if(i<=num){
                cout<<i<<" ";
                ntimes(i+1,num);
            }
        }
};
int main()
{
    Solution s;
    int i,num;
    cin>>num;
    s.ntimes(i,num);
    return 0;
}