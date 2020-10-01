/*
Problem Link: https://www.interviewbit.com/problems/excel-column-title/
*/

string Solution::convertToTitle(int A) {
    string res = "";
    while(A > 0)
    {
        res += (A - 1)% 26 + 'A';
        A = (A - 1)/26;
    }
    reverse(res.begin(), res.end());
    return res;
}
