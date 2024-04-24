#include <stdio.h>

int main() {
    // Your code goes here
    char a[5];
    int size=sizeof(a);
    for (int i=1; i<=5; i++){
        scanf("%c", &a[i]);
    }
    for (int i = 1; i<=5; i++){
        printf("%c", a[i]);
    }

    printf("%d",sizeof(a));
    return 0;
}