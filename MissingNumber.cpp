//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

//////////////////////////////////////__268__LEETCODE////////////////////////////////////
// EASY

/*

For an array of n size, with elements in range of [1,n] and array does not
contain any duplicates. Return the number which is missing in range of [1,n]

*/

/*

Brute Approach: Iterate and search linearly
            ---> Consume more time

Better Approach: Using a Hash of size 'n+1', store the elements in range [1,n] accord. to index
            and start comparing the hash with the given array
            if element is present in hash then mark it/ set it 1
            and element which is present in hash but not array will not get marked throughout the iteration
            in end return that element (index)
            ---> Space complexity will increase as we are using a hash of size 'n+1'

Optimal Approach: Using XOR operation

SOL:
int missingNumber(vector<int>&a, int N) {

    // Write your code here.

    1.
    // int xor1=0,xor2=0;
    // int n=N-1;
    // for(int i=0;i<n;i++){
    //     xor2=xor2^a[i];
    //     xor1=xor1^(i+1);
    // }
    // xor1=xor1^N;
    // return xor1^xor2;

    2.
    int xorr=0;
    for(int i=0;i<N-1;i++){
        xorr=xorr^a[i]^(i+1);
    }
    return xorr^N;
}

TC: O(n)

SC: O(1)

*/