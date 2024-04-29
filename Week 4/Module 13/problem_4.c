/* 


  *
 ***
*****
 ***
  *
  

  
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 1; i<=n; i++)
    {   
        
        for (int  j = 1; j <=s; j++)
        {
           printf(" ");
        }
        
        for (int j = 1; j <= k; j++)
        {   
            printf("*");
        }
        
        k+=2;
        s--;
        printf("\n");
        
    }
int new_s=1;
int new_k=n+1;

    for (int i = n-1; i>=1; i--)
    {   
        
        for (int  j = 1; j <=(n-i); j++)
        {
           printf(" ");
        }
        
        for (int j = 1; j<=(2*i -1); j++)
        {   
            printf("*");
        }
        
        // new_k-=2;
        new_s++;
        printf("\n");
        
    }
    
    return 0;
}