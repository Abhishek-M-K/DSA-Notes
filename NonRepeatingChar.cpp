//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

//////////////////////////////////////__387__LEETCODE////////////////////////////////////
// EASY

/*

In a string of duplicate characters,
return the first non-repeating character
or
return the index of first non repeating character

If there's no unique character then return -1

*/

/*

Brute : Iterate through the string and find count for every character

Better/ Optimal : Use hashmaps

SOL:

#include <bits/stdc++.h>
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  hashmap<char,int> mpp = new.hashmap<char,int>();
  int n=str.length();

  for(int i=0;i<n;i++){
    char ch = str.charAt(i);
    if(mpp.containsKey(ch)==false){
      mpp.put(ch,1);
    }else{
      int freq = mpp.get(ch);
      freq++;
      mpp.put(ch,freq);
    }
  }

}

TC: O(n)
SC: O(n)


*/