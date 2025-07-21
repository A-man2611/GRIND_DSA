#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int lowerBound(vector<int>& vec, int x)
        {
            for(int i=0;i<vec.size();i++){
                if(vec[i] >= x)
                    return i;
            }
            return -1;
        }

        int lowerboundAlgo(vector<int>& vec, int x){
            auto it = lower_bound(vec.begin(),vec.end(),x);
            int idx = (it == vec.end()) ? -1 : (it - vec.begin());
            return idx;
        }

};

int main(){
    int k;
    cin>>k;
    vector<int> vec;

    //inserting the value
    for(int i=0;i<k;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    
    int x;
    cin>>x;
    
    Solution s;
    cout<<s.lowerBound(vec,x);
    cout<<s.lowerboundAlgo(vec,x);

    return 0;
}