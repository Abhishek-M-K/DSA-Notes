//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

In a matrix, check the num of 1's surrounding the 0's , return their sum

*/

/*

SOL:

#include <bits/stdc++.h>
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int count=0;
    int n=mat.size();
    int m=mat[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                //check for 1's in left
                if((mat[i][j-1]==1) && (j>0))
                    count++;
                //check for 1's in right
                if((mat[i][j+1]==1) && (j<=m))
                    count++;
                //check for 1's in up
                if((mat[i-1][j]==1) && (i>0))
                    count++;
                //check for 1's in down
                if((mat[i+1][j]==1) && (i<=n))
                    count++;
            }else{
                continue;
            }
        }
    }
    return count;
}

TC: O(n square)

SC: O(1)

*/