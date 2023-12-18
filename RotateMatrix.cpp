//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

//////////////////////////////////////__48__LEETCODE////////////////////////////////////
// MEDIUM

/*

Rotate a N*N matrix by 90 degrees
1---> Clockwise
2---> Anticlockwise
3--->In-Place Anticlockwise (Nested Loops) ---> Optimal Solution

*/

/*

SOL:

#include<vector>

//Rotate matrix clockwise by 90 degrees
void rotateMatrix(vector<vector<int>> &mat){
    // Write your code here.
    int n=mat.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }

}

//Rotate matrix anticlockwise by 90 degrees
void rotateMatrix(vector<vector<int>> &mat){
    // Write your code here.
    int n=mat.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    for(int j=0;j<n;j++){
        reverse(mat[j].begin(),mat[j].end());
    }

}

//Rotate matrix anticlockwise IN-PLACE by 90 degrees (nested loops)
void inplaceRotate(vector<vector<int>> &mat)
{
    int n=mat.size();

    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][n-1-i];
            mat[j][n-1-i] = mat[n-1-i][n-1-j];
            mat[n-1-i][n-1-j] = mat[n-1-j][i];
            mat[n-1-j][i] = temp;
        }
    }
}

TC: O(n square)

SC: O(1)

*/