#include <stdio.h>
#include <string.h>
int main() {
    char a[15];
    fgets(a,19,stdin);
    a[11]='\0';//to stop the string to peint an enter
    
    printf("%s",a);
    
    return 0;
}