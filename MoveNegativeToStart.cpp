//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

An array of N elements, rearrange the elemments such that
all negatives are at the beiginning of the array
and all posiitvive are at the end

*/

/*

Brute: Store the negative elements in temp array
        and then array the elements in the given array accordingly
        by overwriting
Disadvantage: SC : O(n)

Optimal: Take two pointers i and j=-1
        iterate in array if arr[i]>=0, set j=i

        again iterate in the array
        and if(j!=-1 and arr[i]<0)
        then swap arr[i] with arr[j]
        in this way with the help of j
        we will locate all +ve and zero numbers to the end of array
        and others to the beginning
        without using auxiliary space

*/

/*

SOL:
#include <bits/stdc++.h>
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    int i;
    int j=-1;

    for(i=0;i<n;i++){
        if(nums[i]>=0){
            j=i;
            break;
        }
    }

    for(i=j+1;i<n;i++){
        if(j!=-1 && nums[i]<0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;

}

*/