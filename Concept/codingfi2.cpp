//new code
#include<iostream>
#include<vector>
using namespace std;
int countSubmatrix(vector<vector<char>>& grid){
    int m = grid.size();
    int n = grid[0].size();
    int count =0;
    vector<vector<int>> prefixX(m+1,vector<int>(n+1,0));
    vector<vector<int>> prefixY(m+1,vector<int>(n+1,0));
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            prefixX[i+1][j+1] = prefixX[i+1][j] + prefixX[i][j+1] - prefixX[i][j] + (grid[i][j]=='X');
            prefixY[i+1][j+1] = prefixY[i+1][j] + prefixY[i][j+1] - prefixY[i][j] + (grid[i][j]=='Y');
            }
    }
    
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            int x_count = prefixX[i][j];
            int y_count = prefixY[i][j];
            
            if(x_count>0 && x_count == y_count){
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