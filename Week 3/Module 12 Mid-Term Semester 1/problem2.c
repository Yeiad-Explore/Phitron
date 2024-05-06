#include <stdio.h>
#include<string.h>

int main() {
    
    char a[10000];
    scanf("%s",a);
    int count=0;
    int l = strlen(a);


    for (int i = 0; a[i] != '\0'; i++)
    {
         if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
            count++; 
        }
    }




    
    printf("%d", count);
    return 0;
}