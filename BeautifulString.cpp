//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

a beautiful string is a binary string consisting of only 0s and 1s
eg: "10101" , "01010","010",etc
a beautiful string starts and ends with same element
and also follows a alternative pattern

In this question we have to find the beatiful string for a given binary string
with minimum number of changes
eg: "1001010" this can be converted to : "1010101" ---> 5 changes
                                       : "0101010" ---> 2 changes

we have to return the string with minimum changes made

*/

/*

1. Generate function will generate beautiful string
   takes the length of the given string and a boolean zero var
   zero describes whether or not there's a zero at the start of the string
   if zero is present result string will take zeroes
   otherwise it will take ones

   a character var temp will be assigned 0/1
   on the condition that the last element of result string is 0
   if it is, then temp =1 , otherwise 0
   and result += temp

   this will generate 2 possible beautiful strings

string generate(int n, bool zero){
    string res="";
    if(n==0) return res;

    if(zero){
        res+='0';
        n--;
    }else{
        res+='1';
        n--;
    }

    while(n!=0){
        char temp=(res[res.size()-1]=='0') ? '1' : '0';
        res+=temp;
        n--;
    }

    return res;
}


2. This function will compare the given binary string with geneartaed beautiful string
    and set a counter for no. of changes made


int change(string str, string s, int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(str[i]!=s[i]){
            ans++;
        }
    }
    return ans;
}



int makeBeautiful(string str) {
    // Write your code here
    int n=str.size();

    string s1 = generate(n,true);
    int dif1=change(str,s1,n);

    string s2 = generate(n,false);
    int dif2=change(str,s2,n);

    return min(dif1,dif2);
}


*/
