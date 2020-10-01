/*
Problem Link: https://www.interviewbit.com/problems/next-permutation/
*/

vector<int> Solution::nextPermutation(vector<int> &A) {
    int n = A.size(), ind = -1;
    for(int i = n - 1; i > 0; i--)
    {
        if(A[i-1] < A[i])
        {
            ind = i-1;
            break;
        }
    }
    reverse(A.begin() + ind + 1, A.end());
    if(ind != -1)
    {
        auto it = upper_bound(A.begin() + ind + 1, A.end(), A[ind]);
        swap(A[ind], *it);
    }
    return A;
}
