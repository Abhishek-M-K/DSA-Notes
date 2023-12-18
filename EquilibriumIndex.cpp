//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

//////////////////////////////////////__724__LEETCODE////////////////////////////////////
// EASY

// Q. FInd the Equilibrium index for the array

/*  BEST / OPTIMAL :
    equilibrium index is the index for which rhs sum =lhs sum

    Approach: Here we'll first calculate the sum of the array
    then iniliaze lhs sum =0;

    In the second loop, we'll decrement the sum i.e. it will act as the rhs summ
    then we'll compare lhs rhs , if they are same then return index i
    then increment the lsum
    otherwise return -1 --> no equilibrium index
*/

// #include <bits/stdc++.h>
// int findEquilibriumIndex(vector<int> &arr)
// {
//     // Write your code here.
//     int n = arr.size();
//     int lsum, sum;
//     lsum = 0, sum = 0;
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }

//     for (i = 0; i < n; i++)
//     {
//         sum = sum - arr[i];
//         if (lsum == sum)
//         { // here sum is acting as righthandside sum
//             return i;
//         }
//         lsum = lsum + arr[i];
//     }
//     return -1;
// }
