#include <stdio.h>

int main() {
    int n=5;
    int a[n+1];
    int temp;
    for (int i = 0; i<n+1 ; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <=n; i++)
    {
        temp = a[i];
        for (int j = n; i>=0; j--)
        {
            a[j] = a[i];
            a[j] = temp;
        }
        
    }

    
    for (int i = 0; i <=n; i++)
    {
        printf("Index a[%d] = %d\n",i,a[i]);
    }
    
    
    return 0;
}