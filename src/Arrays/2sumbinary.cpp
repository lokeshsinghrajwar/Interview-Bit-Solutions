 /*2-sum Binary output
 Given a binary search tree T, where each node contains a positive integer, and an integer K, you have to find whether or not there exist two different nodes A and B such that A.value + B.value = K.

Return 1 to denote that two such nodes exist. Return 0, otherwise.

Notes

Your solution should run in linear time and not take memory more than O(height of T).
Assume all values in BST are distinct.
Example :

Input 1: 

T :       10
         / \
        9   20

K = 19

Return: 1

Input 2: 

T:        10
         / \
        9   20

K = 40

Return: 0*/
 int check(TreeNode *A,unordered_set<int> &mp,int B,int &flag)
 {
        if(A==NULL)
        {
            return 0;
        }
        
        if(mp.find(B-A->val)!=mp.end())
        {
            flag=1;
            return 1;
        }
        else
            mp.insert(A->val);
            
    check(A->left,mp,B,flag);
    if(flag==1)
        return 1;
    check(A->right,mp,B,flag);
    
    
    if(flag==1)
        return 1;
        
        
    return 0;
    
        
        
 }
int Solution::t2Sum(TreeNode* A, int B) 
{
    
    unordered_set<int> mp;
    int flag=0;
    int f=check(A,mp,B,flag);
    
     return f;
}