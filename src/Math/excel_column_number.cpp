/*
Problem Link: https://www.interviewbit.com/problems/excel-column-number/
*/

int Solution::titleToNumber(string A) {
    int res = 0, base = 1;
    for(int i = A.size() - 1; i >= 0; i--, base *= 26)
        res += base * (A[i] - 65 + 1);
    return res;
}
