//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

    Here in this question, wherever we encounter in a binary matrix,
    we have to make every element zero in that corresponding row and column

    Good Approach :
    Make two arrays of size N & M respectively; row[n]={0} col[m]={0}
    traverse the matrix
    if we encounter a zero 0
    --> then set that corresponding ith and jth value in row and col arrays as 1

    and again traverse the matrix
    if row[i] or col[j] is set then make values 0

*/

/*

SOL:

#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    // Write your code here.
    int row[n]={0};
    int col[m]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}

TC: O(n*m) + O(n*m)
SC: O(n) + O(m)

*/
