#include <stdio.h>
#include<string.h>
int main() {
    int a[100], b[100];
    scanf("%s %s", &a,&b);
    printf("Original a = %s \n", a);
    printf("Original b = %s \n", b);
    for (int i = 0; i <=strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("Copied a = %s", a);

    
    return 0;
}