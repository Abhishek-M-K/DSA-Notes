//////////////////////////////////////CODE STUDIO////////////////////////////////////
// MEDIUM

//////////////////////////////////////__11__LEETCODE////////////////////////////////////
// MEDIUM

/*

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

*/

/*
Approach : Using Two-Pointer approach

take a var ans=0 , which we will return with max area of water covered
one pointer on each end, i=0 and j=length-1

area of water contained is dependent on the shortest corner of container

so first compare the heights of left and right corner --> take the minimum height
calculate the area as ---> minimum height * diff between the i & j

ans will contain maximum of ans / area calculated

return ans
*/

/*

SOL:
#include <bits/stdc++.h>
int maxArea(vector<int>& height) {
    // Write your code here.
    int left=0,right=height.size()-1;
    // int maxleft=0, maxright=0;
    int ans=0;

    while(left<=right){
        int mini=min(height[left],height[right]);
        int cArea=mini*(right-left);
        ans=max(ans,cArea);

        if(height[left]>height[right]) right--;
        else left++;
    }
    return ans;
}

TC: O(n)
SC: O(1)

*/
