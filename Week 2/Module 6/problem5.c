#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= 12; i++)
    {   int x = n * i;
        printf("%d * %d = %d\n",n,i,x);
    }
    
    return 0;
}