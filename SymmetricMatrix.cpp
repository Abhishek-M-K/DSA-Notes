//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

Check if given N*N matrix is symmetric or not, if yes return true otherwise false:
a matrix is symmetric if it's transpose is equal to the original matrix

*/

/*

SOL:

#include <bits/stdc++.h>
bool isMatrixSymmetric(vector<vector<int>> &matrix){
    // Write your code here.
    int n=matrix.size();
    int tran[n][n];
    int i,j;

    //MAKING THE TRANSPOSE OF THE GIVEN MATRIX
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            //swap(matrix[i][j],matrix[j][i]);
            tran[i][j]=matrix[j][i];
        }
    }

    //COMPARING THE GENERATED TRANSPOSE WITH THE ORIGINAL MATRIX
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(tran[i][j]!=matrix[i][j]){
            return false;
            }
        }
    }
    return true;
}

TC: O(n square)

SC: O(n square)

*/