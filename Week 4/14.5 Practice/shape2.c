#include <stdio.h>
void pattern(){
    int k=1;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = n-i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k+=2;
    }
    
}
int main() {
    pattern();
    
    return 0;
}