#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count = 0;
    int a[n];

    for (int i = 0; i < n; i++)
    {   
        printf("Array Input Index %d = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count += a[i];
    }
    printf("%d\n", count);

     

    
    return 0;
}