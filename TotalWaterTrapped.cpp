//////////////////////////////////////CODE STUDIO////////////////////////////////////
// MEDIUM

//////////////////////////////////////__42__LEETCODE////////////////////////////////////
// HARD

/*

Given n non-negative integers representing an elevation map
where the width of each bar is 1,
compute how much water it can trap after raining.

*/

/*

Brute: We'll iterate through array and find water covered between two consecutive bars

Optimal: Two pointer Approach
         ans var which be the total water trapped
         left and right pointer
         maxleft and maxright which be the max height of bars at left and right
         initialy maxleft and maxright will be zero

         if left bar is smaller than right bar
            then check if left bar is greater than maxleft
                if it is, then maxleft = left bar
                else ans = maxleft - left bar

         othenwise if right bas is smaller than left bar
            check if right bar is greater than maxright
                if it is, then maxright = right bar
                else ans = maxright - right bar

         return ans

*/

/*

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int maxleft=0,maxright=0;
        int ans=0;

        while(left<=right){

            if(height[left]<=height[right]){
                if(height[left]>=maxleft){
                    maxleft=height[left];
                }else{
                    ans += maxleft-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=maxright){
                    maxright=height[right];
                }else{
                    ans += maxright-height[right];
                }
                right--;
            }
        }
        return ans;
    }
};

TC: O(n)
SC: O(1)

*/