#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//log(n)
class Solution{
    public: 

    //iterative code
    int BinarySearch(vector<int>& vec, int target){
        sort(vec.begin(),vec.end());
        int low = 0;
        int n = vec.size();
        int high = n-1;

        while(low <= high){
            int mid = (high + low)/2;
            if(vec[mid] == target) return mid;
            else if(vec[mid] < target) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
    //recursive implementation
    // Recursive binary search (wrapper)
    int recursiveBS(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        return recusrsiveBShelper(nums, 0, (int)nums.size()-1,target);
    }
    private:
        //helper function for BS
        int recusrsiveBShelper(const vector<int>& vec, int low, int high, int target){
            if(low>high) return -1;
            int mid = (low + high) /2;
            if(vec[mid] == target) return mid;
            else if(vec[mid] < target) return recusrsiveBShelper(vec,mid+1,high, target);
            else return recusrsiveBShelper(vec, low, mid-1,target);
        }
};

int main(){
    int n,target;
    cin>>n;
    vector<int> vec;
    //inserting some values in the array 
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    cin>>target;
    Solution s;
    cout<<s.BinarySearch(vec,target);   
    cout<<s.recursiveBS(vec,target);
    return 0;
}