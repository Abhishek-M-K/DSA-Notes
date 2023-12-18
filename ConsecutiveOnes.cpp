//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

Given an array consisting of onnly 0's and 1's , return the max number of consecutive ones.
eg: [1,0,1,1,0,1,0,1,1,1] ---> 3

*/

/*


Approach: Take a counter and variable ones/ans to return the max number of consecutive ones.
        iterate the array and check if arr[i] is a 1, if it is then increment the counter
        and ones/ans will be the mmax of ones/ans and counter.

        if the arr[i] becomes zero then set the counter to 0

        this way we'll keep iterating

SOL:
#include <bits/stdc++.h>
int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int count=0;
    int ones=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            ones=max(ones,count);
        }
        else{
            count=0;
        }
    }
    return ones;
}

TC: O(n)

SC: O(1)

*/