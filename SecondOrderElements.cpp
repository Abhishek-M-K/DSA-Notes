//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

// int slargest(vector<int> &a, int n)
// {
//     int large = a[0];
//     int slarge = -1;
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] > large)
//         {
//             large = a[i];
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] > slarge && a[i] < large)
//         {
//             slarge = a[i];
//         }
//     }
//     return slarge;
// }

// int ssmallest(vector<int> &a, int n)
// {
//     int small = a[0];
//     int ssmall = INT_MAX;
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] < small)
//         {
//             ssmall = small;
//             small = a[i];
//         }
//         else if (a[i] != small && a[i] < ssmall)
//         {
//             ssmall = a[i];
//         }
//     }
//     return ssmall;
// }

// vector<int> getSecondOrderElements(int n, vector<int> a)
// {
//     // Write your code here.
//     int slarge = slargest(a, n);
//     int ssmall = ssmallest(a, n);
//     return {slarge, ssmall};
// }
