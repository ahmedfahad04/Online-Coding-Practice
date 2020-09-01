#include <stdio.h>
 
/*long long int fn( int n ) {
    long long int  i;
 
    memo[0] = a;
    memo[1] = b;
    memo[2] = c;
    memo[3] = d;
    memo[4] = e;
    memo[5] = f;
   
    for(i = 6;i <= n;i++) {
   
        memo[i] = (memo[i - 1] + memo[i - 2] + memo[i - 3] + memo[i - 4] + memo[i - 5] + memo[i -6])%10000007;
       
    }
   
    return memo[n];
}
 */
int main() {
    long long int n, caseno = 0, cases,i,memo[10003];
    scanf("%lld", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &memo[0], &memo[1], &memo[2], &memo[3], &memo[4], &memo[5], &n);
       
         
    for(i = 6;i <= n;i++) {
   
        memo[i] = (memo[i - 1] + memo[i - 2] + memo[i - 3] + memo[i - 4] + memo[i - 5] + memo[i -6])%10000007;
       
    }
        printf("Case %lld: %lld\n", ++caseno, memo[n]% 10000007);
    }
    return 0;
}
