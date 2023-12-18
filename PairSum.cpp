//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

//////////////////////////////////////__1__LEETCODE////////////////////////////////////
// EASY

/*

Given an array of elements and a target, count the no. of pairs that add upto that target

*/

/*

Brute : Iterate and keep adding every of two elements
        and increment the counter if any pair adds upto the target
        but its more time consumiing

Better/ Optimal : Using a map/ unordered_map

                 for eg ---> a+b=target let a-->  arr[i]
                 similarly find b=target-arr[i]
                 and if that b exists in map , then set count to b

                 and if not then add that b to the map

                 at the end if still count is zero then return -1
                 else return the count as number of pair satisfying the target

*/
/*

SOL:

#include <bits/stdc++.h>
#include <unordered_map>
int pairSum(vector<int> &arr, int n, int target){
    // Write your code here.
    int count=0;
    unordered_map<int,int> umap;

    for(int i=0;i<n;i++){
        int b=target-arr[i];

        if(umap[b]){
            count+=umap[b];
        }else umap[arr[i]]++;

    }
    if(count==0){
            return -1;
    }

    return count;
}

TC: O(n)
SC: O(n)

*/