#include <stdio.h>
void pattern(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j>=i ;j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}

int main() {


    pattern();
    return 0;
}