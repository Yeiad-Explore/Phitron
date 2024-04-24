#include <stdio.h>

int main() {
 
    int n;
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++) // range
    {
        int x;
        scanf("%d",&x);
        do  //iteration over the digit atleast 1 time even the number is 0
        {
            int rem = x % 10;
            x = x/10;
            printf("%d ",rem);
            
           
        }
        while (x!=0);
        printf("\n");
    }
    
    
    return 0;
}