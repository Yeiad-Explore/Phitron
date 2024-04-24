#include <stdio.h>
#include  <string.h>
int main() {
    char a[100];
    scanf("%s",a);
    int count=0;
    int  len=strlen(a);
    /*
    the raw method
    for (int i = 0; a[i] != '\0' ; i++)
    {
        count++;
    }    
    */

    
    printf("%d",len);
    return 0;
}