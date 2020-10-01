string Solution::solve(int A) {
int res[3000];
res[0] = 1;
int res_size = 1;
string s;
int prod;
int carry = 0;
for(int k = 2; k <= A ; k++){
for(int i = 0 ; i < res_size ; i++){
prod = res[i]*k + carry;
res[i] = prod%10;
carry = prod/10;

    }
     while(carry>0){
        res[res_size++] = carry%10; 
        carry = carry/10; 
     }
}
for(int i = res_size - 1; i >= 0 ; i--)
   s.push_back(res[i] + '0');
return s;
}
