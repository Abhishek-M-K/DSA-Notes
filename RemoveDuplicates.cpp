//////////////////////////////////////__26__LEETCODE////////////////////////////////////

// Q. Remove duplicate fromm sorted array and return the number of unique elements.

// Optimal Approach: Two-Pointers approach

// EASY

//  class Solution {
//  public:
//      int removeDuplicates(vector<int>& a) {
//          int n=size(a);
//          int i=0; //counts
//          for(int j=1;j<n;j++){
//              if(a[j]!=a[i]){
//                  a[i+1]=a[j];
//                  i++;
//              }
//          }
//          return (i+1);
//      }
//  };

// TC=O(n)
// SC=O(1)