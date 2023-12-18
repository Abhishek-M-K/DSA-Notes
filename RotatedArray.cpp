//////////////////////////////////////__189__LEETCODE////////////////////////////////////

// Q. Rotate an Array by kth steps.
// MEDIUM

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i=0;i<nums.size();i++){
//             temp[(i+k)%nums.size()]=nums[i];
//         }

//      nums=temp;

//     }
// };

/*
    if k=n, then roatted array will be same as given array,
    therefore we have take k%n
*/

// TC---->O(n)
// SC---->O(n)/O(1)

// BEST APPROACH ---> REVERSING//

//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY
// OPTIMAL

// Q. Rotate an Array by kth steps.

// SOLUTION 1:

// #include <bits/stdc++.h>

// #include <iostream>

// using namespace std;

// void revArray(int arr[], int n, int k)
// {
// reverse(arr,arr+k);
// reverse(arr+k,arr+n);
// reverse(arr,arr+n);
// }

// int main() {
// int n;
// cin >> n;

// int arr[n];
// for(int i = 0; i < n; i++)
// cin >> arr[i];

// int k;
// cin >> k;

// revArray(arr, n, k);
// for(int i = 0; i < n; i++)
// cout << arr[i] << " ";
// return 0;
// }

// SOLUTION 2:

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// void revArray(int arr[], int start, int end)
// {
//     for (int i = start, j = end; i < j; i++, j--)
//     {
//         swap(arr[i], arr[j]);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int k;
//     cin >> k;

//     revArray(arr, 0, k - 1); ---> reverses the k elements
//     revArray(arr, k, n - 1); ---> reverses the remaining n-k elements
//     revArray(arr, 0, n - 1); ---> again reverses the (reversed array)

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }