#include <stdio.h>

int main() {
    int a[5] = {10,20,40,80,50};
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    
    
    return 0;
}