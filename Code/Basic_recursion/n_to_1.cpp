#include<iostream>
using namespace std;

class Solution{
    public:
        void nto1(int i, int num)
        {
            if(i < num) return;
            cout << i << " ";
            nto1(i - 1, num);
        }
};
int main(){
    Solution s;
    int num;
    cin >> num;
    s.nto1(num, 1);
    return 0;
}