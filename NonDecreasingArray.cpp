//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

Logic ---> With ONLY ONE MOVE make the array sorted/ascending order/non-decreasing

Solution ---> Start with i=1 assuming arr[0] is smallest in the array
    then traverse the array fromm 1--->n

    if arr[i] is less than previous element arr[i-1]
    then increment the count

    and if count is greater than 1 , then return false i.e.
    the given array cannot be converted to non--decreasing by only one move

    and if i=1 OR arr[i-2] < arr[i] then make arr[i-1]=arr[i]
    otherwise if arr[i-2] > arr[i] then make arr[i]=arr[i-1]

*/

// #include <bits/stdc++.h>
// bool isPossible(int *arr, int n)
// {
//     //  Write your code here.
//     int i;
//     int count=0;
//     for(i=1;i<n;i++){   //IMPORTANT ---> since we checking for non-dec array ,
//                         //start with i=1 as first element is assumed to be smallest

//         if(arr[i]<arr[i-1]){
//             count++;

//             if(count>1)
//                 return false;

//             if(i==1 || arr[i-2]<=arr[i])
//                 arr[i-1]=arr[i];
//             else
//                 arr[i]=arr[i-1];

//         }
//     }
//     return true;

// }

//////////////////////////////////////__665__LEETCODE////////////////////////////////////
// MEDIUM