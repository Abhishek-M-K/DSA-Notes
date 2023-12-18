//////////////////////////////////////CODE STUDIO////////////////////////////////////
// MEDIUM

//////////////////////////////////////__283__LEETCODE////////////////////////////////////
// EASY

// BRUTEFORCE
// Q. MOve all the zeroes in the array to the end
/*
Approach: move zeroes to end means move non-zeroes to front
    so first lets store non-zeroes to a temp array
    then place those elements in the front of the given array
    and the remaining spaces will be filled with zeroes
*/
// SOLUTION:

// void pushZerosAtEnd(vector<int> &arr)
// {
// 	// Write your code here.
// 	int n=arr.size();
// 	vector<int> temp;
// 	int i;

// here we will store all non-zero to temp first
//  	for(i=0;i<n;i++){
//  		if(arr[i]!=0){
//  			temp.push_back(arr[i]); // X DO NOT USE temp[i]=arr[i] X //
//  		}
//  	}

// then insert them to the front positions
//  	for(i=0;i<temp.size();i++){
//  		arr[i]=temp[i];
//  	}

// fill the remmaing places with zeroes
//  	for(i=temp.size();i<n;i++){
//  		arr[i]=0;
//  	}
//  }

////////////////////////////////////////////////////////////////////////////////////////
// OPTIMAL

/*
Approach: Two pointer approach, complete the problem in one iteration without temp array
    first iterate and if found a zero, then make j=i
    then iterate from next positionn to zero, i.e. , i=j+1 to n
    if arr[i]!=0 , then swap (arr[i],arr[j]) ---> arr[j]=0
    with every swap increment j by one, j++
*/
// SOLUTION:
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n=nums.size();
//         int i;
//         int j=-1;

//         for(i=0;i<n;i++){
//             if(nums[i]==0){
//                 j=i;
//                 break;
//             }
//         }

//         for(i=j+1;i<n;i++){
//             if(j!=-1 && nums[i]!=0){
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }
//     }
// };