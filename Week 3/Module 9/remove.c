#include <stdio.h>

int main() {
    // Your code goes here
    int n=5;
    int insert=100, pos=1;
    int a[n+1];
    for (int i = 0; i<n+1 ; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = pos; i<=n; i++)
    {
       a[i] = a[i+1];
    }
    for (int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    
     
    return 0;
}