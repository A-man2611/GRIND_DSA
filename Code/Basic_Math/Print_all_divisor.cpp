#include<iostream>
#include <vector>
#include<math.h>
using namespace std;

class Solution{
    public:
        vector<int> Print_divisor(long int integer)
        {
            vector<int> a;
            for (int i = 1;i<=integer;i++)
            {
                if(integer%i==0){
                    a.push_back(i);
                }
                else{;}

            }
            return a;
        }
};

int main()
{
    Solution s;
    long int integer;
    cin>>integer;
    vector<int> divisors = s.Print_divisor(integer);
    for(int d: divisors){
        cout<<d<<" ";
    }
    return 0;
}