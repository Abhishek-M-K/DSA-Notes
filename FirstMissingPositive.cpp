//////////////////////////////////////CODE STUDIO////////////////////////////////////
// MEDIUM

//////////////////////////////////////__41__LEETCODE////////////////////////////////////
// HARD

// Q. FInd the next missing positive in the given array

/*

    If positive elements in the array are in range of 1 --> n
    1) if any number from range is missing , in eg 2, {1,3,4} here 2 is missing
        therefore next smallest positive is 2
    2) if all numbers are in range then next missing positive would be n+1
        in eg 1, {1,2,3,4,5} here all are in range and nothing is missing between 1-->5
        therefore next positive is 6 (5+1)

    For eg: arr[]={1,2,3,4,5}
    Here the next postive number would be 6

    For eg: arr[]={-2,1,3,4}
    Here the next positive number would be 2
*/

// BETTER / GOOD APPROACH:
/*

    1. For all elements <= 0, we will change them to n+1;
        so that every element is in range 1 --> n

    2. Take an index = (number present at the i) - 1;
       if index < n
       then make arr[index] negative

    3. Now, If elements >=0
            return i+1

    4. Return n+1 in case everything is in range, so that next missing +ve would  be n+1

*/

#include <bits/stdc++.h>
int firstMissing(int arr[], int n)
{
    // Write your code here.
    // 1.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        {
            arr[i] = n + 1;
        }
    }

    // 2.
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;
        if (index < n)
        {
            arr[index] = -arr[index];
        }
    }

    // 3.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            return i + 1;
        }
    }
    return n + 1;
}