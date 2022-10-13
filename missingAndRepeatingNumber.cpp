/*
You are given an array of size 'N'. The elements of the array are in the range from 1 to 'N'.
Ideally, the array should contain elements from 1 to 'N'. But due to some miscalculations, there is a number R in the range [1, N] which appears in the array twice and another number M in the range [1, N) which is missing from the array.
Your task is to find the missing number (M) and the repeating number (R).
*/

#include <bits/stdc++.h> 
pair<int,int> missingAndRepeating(vector<int> &arr, int n1)
{
    // Write your code here
    long long int n = arr.size();
    long long int s = 0, s2 = 0;
    for(long long int i = 0; i < n; i++){
        s+=(long long int)arr[i];
        s2 += (long long int)arr[i]*arr[i];
    }
    long long int sum = (n*(n+1))/2;
    long long int sum2 = (n*(n+1)*(2*n+1))/6;
    long long int rplusm = (s2-sum2)/(s-sum);
    long long int rminusm = s-sum;
    pair<int, int> p;
    p.first = (rplusm - rminusm)/2;
    p.second = (rplusm + rminusm)/2;
    return p;
}
