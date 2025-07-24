#include<iostream>
#include<vector>
using namespace std;
int countSubmatrix(vector<vector<char>>& grid){
    int m = grid.size();
    int n = grid[0].size();
    int count =0;

    
    for(int row = 0; row<m;++row){
        for(int col =0;col<n;++col){
            int x_count = 0, y_count =0;
            
            for(int i=0;i<=row;++i){
                for(int j=0;j<=col;++j){
                    if(grid[i][j] == 'X') x_count++;
                    else if(grid[i][j] == 'Y') y_count++;
                }    
            }
            if(x_count>0 && (x_count==y_count)){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<vector<char>> grid1 ={
    {'X','Y','.'},
    {'Y','Y','.'}};
    cout<< "value for the count: "<<countSubmatrix(grid1)<<endl;
    return 0;
}