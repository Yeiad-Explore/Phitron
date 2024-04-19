#include <stdio.h>
//dividend is D, the quotient is Q and the remainder is R. 
int main() {
    
    int d,q,r;
    scanf("%d%d%d",&d,&q,&r);
    int divisor=(d/q);
    printf("%d", divisor);
    return 0;
}