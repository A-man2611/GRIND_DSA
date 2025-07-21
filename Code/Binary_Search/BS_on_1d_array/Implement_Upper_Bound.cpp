#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int upperBound(vector<int>& vec, int x){
            for(int i =0;i<(int)vec.size();i++){
                if(vec[i] > x) 
                    return i;
            }
            return -1;
        }
        int upperBoundAlgo(vector<int>& vec, int x){
            auto it = upper_bound(vec.begin(), vec.end(), x);
            int idx = (it == vec.end()) ? -1 : (it -vec.begin());
            return idx;
        }
};

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    
    //Inserting the value
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    int x;
    cin>>x;
    Solution s;
    cout<<s.upperBound(vec,x);
    return 0;

}