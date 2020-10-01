/*
Problem Link: https://www.interviewbit.com/problems/largest-number/
*/

bool compare(int x, int y)
{
    string a = to_string(x) + to_string(y);
    string b = to_string(y) + to_string(x);
    return a.compare(b) > 0 ? 1 : 0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> B;
    bool allzero = true;
    
    for(auto i : A)
    {
        if(i > 0)
        {
            B.push_back(i);
            allzero = false;
        }
    }

    if(allzero)
        return "0";

    sort(B.begin(), B.end(), compare);
    string res = "";
    for(auto i : B)
        res += to_string(i);
    
    return res;
}